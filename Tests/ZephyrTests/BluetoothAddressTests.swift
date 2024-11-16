//
//  BluetoothAddressTests.swift
//  Zephyr
//
//  Created by Alsey Coleman Miller on 11/15/24.
//

import Testing
import Bluetooth
import CZephyr
@testable import Zephyr
@testable import ZephyrBluetooth

@Suite
struct BluetoothAddressTests {
    
    @Test
    func testBluetoothAddressString() {
        let data: [BluetoothAddress] = [
            .zero,
            .max,
            BluetoothAddress(rawValue: "00:1A:7D:DA:71:13")!
        ]
        for address in data {
            #expect(bt_addr_t(rawValue: address.rawValue)?.rawValue == address.rawValue)
            #expect(bt_addr_t(rawValue: address.rawValue) == bt_addr_t(address))
        }
    }
}
