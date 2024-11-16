//
//  NetworkBuffer.swift
//  Zephyr
//
//  Created by Alsey Coleman Miller on 11/16/24.
//

import CZephyr

public struct NetworkBuffer: ~Copyable {
    
    internal private(set) var buffer: UnsafeMutablePointer<net_buf>
    
    public var id: Int32 {
        net_buf_id(buffer)
    }
    
    public var capacity: Int {
        Int(net_buf_max_len(buffer))
    }
    
    public init?(pool: borrowing Pool) {
        guard let pointer = net_buf_alloc(pool.pool, k_timeout_t(ticks: 0)) else {
            return nil
        }
        self.init(pointer, retain: false)
    }
    
    public init(_ buffer: UnsafeMutablePointer<net_buf>, retain: Bool = false) {
        self.buffer = buffer
        if retain {
            _ = net_buf_ref(buffer)
        }
    }
    
    public init?(_ other: borrowing NetworkBuffer) {
        guard let buffer = other.withUnsafePointer({
            net_buf_clone(.init(mutating: $0), .init(ticks: 0))
        }) else { return nil }
        self.init(buffer, retain: false)
    }
    
    deinit {
        net_buf_unref(buffer)
    }
    
    public func withUnsafePointer<T, E>(_ body: (UnsafePointer<net_buf>) throws(E) -> (T)) rethrows -> T {
        try body(UnsafePointer(buffer))
    }
    
    public mutating func withUnsafeMutablePointer<T, E>(_ body: (UnsafeMutablePointer<net_buf>) throws(E) -> (T)) rethrows -> T {
        try body(buffer)
    }
    
    public mutating func append(_ newElement: UInt8) {
        _ = net_buf_add_u8(buffer, newElement)
    }
    
    public mutating func append(_ pointer: UnsafePointer<UInt8>, count: Int) {
        net_buf_add_mem(buffer, pointer, count)
    }
    
    //public mutating func append <C: Collection> (contentsOf bytes: C) where C.Element == UInt8 {
    
    
}

public extension NetworkBuffer {
    
    struct Pool: ~Copyable {
        
        public var pool: UnsafeMutablePointer<net_buf_pool>
        
        public var id: Int32 {
            pool_id(pool)
        }
        
        public init?(id: Int32) {
            guard let pointer = net_buf_pool_get(id) else {
                return nil
            }
            self.pool = pointer
        }
    }
}

@_silgen_name("pool_id")
func pool_id(_ pointer: UnsafePointer<net_buf_pool>) -> Int32
