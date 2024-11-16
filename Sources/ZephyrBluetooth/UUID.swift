//
//  UUID.swift
//  Zephyr
//
//  Created by Alsey Coleman Miller on 11/15/24.
//

import Zephyr
import CZephyr
import Bluetooth

extension UnsafeMutablePointer<bt_uuid> {
    
    public init?<Data>(data: Data) where Data : Bluetooth.DataContainer {
        var pointer: UnsafeMutablePointer<bt_uuid>!
        guard let result = data.withContiguousStorageIfAvailable({
            bt_uuid_create(pointer, $0.baseAddress, UInt8($0.count))
        }), result else { return nil }
        self = pointer
    }
}

internal extension String {
    
    init(uuid: UnsafePointer<bt_uuid>) {
        var cString = [CChar](repeating: 0, count: Int(BT_UUID_STR_LEN) + 1)
        bt_uuid_to_str(uuid, &cString, Int(BT_UUID_STR_LEN))
        self.init(cString: cString)
    }
}

public protocol ZephyrBluetoothUUID {
    
    associatedtype Integer
    
    static var uuidType: Int { get }
    
    init(uuid: Integer)
    
    var uuid: bt_uuid { get }
}

extension ZephyrBluetoothUUID where Self: CustomStringConvertible {
    
    public var description: String {
        assert(self.uuid.type == UInt8(Self.uuidType))
        return withUnsafeBytes(of: self) {
            $0.withMemoryRebound(to: bt_uuid.self) {
                String(uuid: $0.baseAddress!)
            }
        }
    }
}

extension bt_uuid_16: ZephyrBluetoothUUID, @retroactive CustomStringConvertible {
    
    public static var uuidType: Int { BT_UUID_TYPE_16 }
    
    public init(uuid: UInt16) {
        self.init(uuid: .init(type: UInt8(Self.uuidType)), val: uuid)
    }
}

extension bt_uuid_32: ZephyrBluetoothUUID, @retroactive CustomStringConvertible {
    
    public static var uuidType: Int { BT_UUID_TYPE_32 }
    
    public init(uuid: UInt32) {
        self.init(uuid: .init(type: UInt8(Self.uuidType)), val: uuid)
    }
}

extension bt_uuid_128: ZephyrBluetoothUUID, @retroactive CustomStringConvertible {
    
    public static var uuidType: Int { BT_UUID_TYPE_128 }
    
    public init(uuid: UInt128) {
        self.init(uuid: .init(type: UInt8(Self.uuidType)), val: uuid.bytes)
    }
}
