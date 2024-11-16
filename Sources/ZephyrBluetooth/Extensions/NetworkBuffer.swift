//
//  NetworkBuffer.swift
//  Zephyr
//
//  Created by Alsey Coleman Miller on 11/16/24.
//

import Zephyr
import CZephyr
import Bluetooth
import BluetoothHCI

public extension NetworkBuffer {
    
    init(hci opcode: UInt16, length: Int) {
        self.init(bt_hci_cmd_create(opcode, UInt8(length)))
    }
}
