//
//  HostController.swift
//  Zephyr
//
//  Created by Alsey Coleman Miller on 11/16/24.
//

import Zephyr
import CZephyr
import Bluetooth
import SystemPackage

public struct HostController: ~Copyable {
    
    public let id: UInt16
    
    internal let connection: OpaquePointer
    
    public init?(id: UInt16) {
        guard let connection = bt_hci_conn_lookup_handle(id) else {
            return nil
        }
        self.id = id
        self.connection = connection
    }
    
    deinit {
        bt_conn_unref(connection)
    }
}
