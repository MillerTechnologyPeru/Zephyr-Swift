//
//  L2CAP.swift
//  Zephyr
//
//  Created by Alsey Coleman Miller on 11/15/24.
//

import Zephyr
import CZephyr
import Bluetooth
import SystemPackage

public struct L2CAPServer: ~Copyable {
    
    nonisolated(unsafe) internal static var context = [UInt: UnsafeMutablePointer<Context>]()
    
    internal private(set) var context: UnsafeMutablePointer<Context>
    
    public var id: UInt {
        context.pointee.id
    }
    
    public var psm: UInt16 {
        context.pointee.server.psm
    }
    
    public init(
        psm: UInt16,
        security: bt_security_t
    ) throws(Errno) {
        try self.init(psm: psm, security: security, register: bt_l2cap_server_register)
    }
    
    internal init(
        psm: UInt16,
        security: bt_security_t,
        register: (UnsafeMutablePointer<bt_l2cap_server>) -> CInt
    ) throws(Errno) {
        self.context = .allocate(capacity: 1)
        self.context.initialize(
            to: Context(
                id: 0,
                server: bt_l2cap_server(
                    psm: psm,
                    sec_level: security,
                    accept: _l2cap_accept,
                    node: sys_snode_t()
                )
            )
        )
        do {
            try withUnsafeMutablePointer(to: &self.context.pointee.server) {
                register($0)
            }.throwsError()
        }
        catch {
            deallocate()
            throw error
        }
        // context id is pointer address
        self.context.pointee.id = withUnsafePointer(to: self.context.pointee.server) {
            UInt(bitPattern: $0)
        }
        Self.context[self.context.pointee.id] = self.context
    }
    
    deinit {
        deallocate()
    }
    
    private func deallocate() {
        context.deinitialize(count: 1)
        context.deallocate()
    }
}

internal extension L2CAPServer {
    
    struct Context: Identifiable {
        
        var id: UInt
        
        var server: bt_l2cap_server
        
        var channels = [OpaquePointer]()
    }
}

internal extension L2CAPServer.Context {
    
    func accept(
        connection: OpaquePointer,
        channel: UnsafeMutablePointer<UnsafeMutablePointer<bt_l2cap_chan>?>
    ) {
        
    }
}

/** @brief Server accept callback
 
  This callback is called whenever a new incoming connection requires
  authorization.
 
  @warning It is the responsibility of this callback to zero out the
  parent of the `channel` object.
 
  @param connection The connection that is requesting authorization
  @param server Pointer to the server structure this callback relates to
  @param channel Pointer to received the allocated channel
 
  @return 0 in case of success or negative value in case of error.
  @return -ENOMEM if no available space for new channel.
  @return -EACCES if application did not authorize the connection.
  @return -EPERM if encryption key size is too short.
 */
// int (*accept)(struct bt_conn *conn, struct bt_l2cap_server *server, struct bt_l2cap_chan **chan);
internal func _l2cap_accept(_ connection: OpaquePointer?, _ server: UnsafeMutablePointer<bt_l2cap_server>?, _ channel: UnsafeMutablePointer<UnsafeMutablePointer<bt_l2cap_chan>?>?
) -> CInt {
    guard let server, let connection, let channel else {
        assertionFailure()
        return 0
    }
    let contextID = UInt(bitPattern: server)
    guard let context = L2CAPServer.context[contextID] else {
        return 0
    }
    // have handle
    context.pointee.accept(connection: connection, channel: &channel.pointee)
    return 0
}
