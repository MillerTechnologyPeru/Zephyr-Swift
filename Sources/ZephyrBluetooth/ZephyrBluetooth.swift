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
    
    public func sendCommand(opcode: UInt16, data: borrowing NetworkBuffer) throws(Errno) -> NetworkBuffer {
        assert(isReady)
        var response: UnsafeMutablePointer<net_buf>!
        try data.withUnsafePointer { dataPointer in
            bt_hci_cmd_send_sync(opcode, .init(mutating: dataPointer), &response)
        }.throwsError()
        return NetworkBuffer(response)
    }
    
    public func startLowEnergyAdvertisement(
        parameters: bt_le_adv_param,
        advertisement: [ZephyrAdvertisementData] = [],
        scanResponse: [ZephyrAdvertisementData] = []
    ) throws {
        var parameters = parameters
        let code = advertisement._withUnsafeBufferPointer { advertisementBuffer in
            return scanResponse._withUnsafeBufferPointer { scanResponseBuffer in
                return bt_le_adv_start(
                    &parameters,
                    advertisementBuffer.baseAddress,
                    advertisementBuffer.count,
                    scanResponseBuffer.baseAddress,
                    scanResponseBuffer.count
                )
            }
        }
        // TODO: Throw error
    }
    
    public func stopLowEnergyAdvertisement() throws {
        bt_le_adv_stop()
    }
}
