//
//  ZephyrBluetooth.swift
//  Zephyr
//
//  Created by Alsey Coleman Miller on 11/15/24.
//

import Zephyr
import CZephyr
import Bluetooth
import SystemPackage

public struct ZephyrBluetooth: ~Copyable {
    
    /// Check if Bluetooth is ready
    public var isReady: Bool {
        bt_is_ready()
    }
    
    /// Get Bluetooth Device Name
    public var name: String {
        String(cString: bt_get_name())
    }
    
    /// Enable Bluetooth.
    ///
    /// - Note: Must be the called before any calls that require communication with the local Bluetooth hardware.
    init() throws(Errno) {
        bt_enable(nil)
    }
    
    deinit {
        bt_disable()
    }
    
    public func setName(_ newValue: String) throws(Errno) {
        try bt_set_name(newValue).throwsError()
    }
    
    public func send(opcode: UInt16, data: borrowing NetworkBuffer) throws(Errno) -> NetworkBuffer {
        assert(isReady)
        var response: UnsafeMutablePointer<net_buf>!
        try data.withUnsafePointer { dataPointer in
            bt_hci_cmd_send_sync(opcode, .init(mutating: dataPointer), &response)
        }.throwsError()
        return NetworkBuffer(response)
    }
    
    public func startAdvertisement(
        parameters: bt_le_adv_param
    ) {
        // bt_le_adv_start
    }
        
}
