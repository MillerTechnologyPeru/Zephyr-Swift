//
//  NetworkBuffer.swift
//  Zephyr
//
//  Created by Alsey Coleman Miller on 11/16/24.
//

import CZephyr

/// Zepyr Network Buffer
public struct NetworkBuffer: ~Copyable {
    
    internal private(set) var data: [UInt8]
    
    internal private(set) var buffer = net_buf_simple()
    
    public init() {
        self.data = []
        net_buf_simple_reset(&buffer)
    }
    
    public init<C>(_ data: C) where C: Collection, C.Element == UInt8 {
        self.data = Array(data)
        self.data.withContiguousStorageIfAvailable({
            net_buf_simple_init_with_data(&buffer, .init(mutating: $0.baseAddress!), $0.count)
        })
    }
    
    public init(_ other: borrowing NetworkBuffer) {
        self.init()
        other.withUnsafePointer {
            net_buf_simple_clone($0, &self.buffer)
        }
        self.data = other.data
    }
    
    public func withUnsafePointer<T, E>(_ body: (UnsafePointer<net_buf_simple>) throws(E) -> (T)) rethrows -> T {
        try Swift.withUnsafePointer(to: buffer, body)
    }
}
