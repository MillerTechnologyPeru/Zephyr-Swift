//
//  Address.swift
//  Zephyr
//
//  Created by Alsey Coleman Miller on 11/15/24.
//

import Zephyr
import CZephyr
import Bluetooth

extension bt_addr_t: @retroactive RawRepresentable {
    
    public init?(rawValue: String) {
        self.init()
        guard bt_addr_from_str(rawValue, &self) == 0 else {
            return nil
        }
    }
    
    public var rawValue: String {
        var cString = [CChar].init(repeating: 0, count: Int(BT_ADDR_STR_LEN) + 1)
        let length = withUnsafePointer(to: self) { bytes in
            bt_addr_to_str(bytes, &cString, Int(BT_ADDR_STR_LEN))
        }
        //return String(decoding: cString.prefix(Int(length)), as: UTF8.self)
        return String(cString: cString)
    }
}

extension bt_addr_t: @retroactive CustomStringConvertible {
    
    public var description: String {
        rawValue
    }
}

extension bt_addr_t: @retroactive Equatable {
    
    public static func == (lhs: Self, rhs: Self) -> Bool {
        withUnsafePointer(to: lhs) { lhsPointer in
            withUnsafePointer(to: rhs) { rhsPointer in
                bt_addr_eq(lhsPointer, rhsPointer)
            }
        }
    }
}

public extension BluetoothAddress {
    
    init(_ zephyr: bt_addr_t) {
        self.init(bigEndian: Self.init(bytes: zephyr.val))
    }
}

public extension bt_addr_t {
    
    init(_ address: BluetoothAddress) {
        self.init(val: address.bigEndian.bytes)
    }
}
