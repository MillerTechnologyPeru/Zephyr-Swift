//
//  GAPData.swift
//  Zephyr
//
//  Created by Alsey Coleman Miller on 11/16/24.
//

import Zephyr
import CZephyr
import Bluetooth
import BluetoothGAP

public struct ZephyrAdvertisementData {
    
    public var type: GAPDataType
    
    public var data: [UInt8]
        
    public init<T: GAPData>(_ data: T) {
        self.type = T.dataType
        self.data = .init(data)
    }
    
    public func withUnsafePointer<T, E>(_ body: (bt_data) throws(E) -> T) rethrows -> T {
        try data.withUnsafeBufferPointer {
            try body(bt_data(type: type.rawValue, data_len: UInt8(data.count), data: $0.baseAddress))
        }
    }
}

internal extension Collection where Self.Element == ZephyrAdvertisementData {

    func _withUnsafeBufferPointer<T, E>(_ body: (UnsafeBufferPointer<bt_data>) throws(E) -> T) rethrows -> T {
        var data = map { $0.withUnsafePointer { $0 } }
        return try data.withUnsafeBufferPointer {
            try body($0)
        }
    }
}

public extension Collection where Self.Element == ZephyrAdvertisementData {
    
    var dataLength: Int {
        withUnsafeBufferPointer {
            bt_data_get_len($0.baseAddress, $0.count)
        }
    }
    /*
    func encode<Data: DataContainer>(to data: Data.Type) -> Data {
        let length = self.dataLength
        var data = Data()
        [UInt8].init(unsafeUninitializedCapacity: <#T##Int#>, initializingWith: )
        data.reserveCapacity(length)
        let size = data.withContiguousStorageIfAvailable { output in
            withUnsafeBufferPointer { input in
                bt_data_serialize(input.baseAddress, output)
            }
        }
        guard let size else {
            fatalError("Unable to encode")
        }
        assert(size == length)
        return data
    }*/
}
