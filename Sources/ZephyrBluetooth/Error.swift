//
//  Error.swift
//  Zephyr
//
//  Created by Alsey Coleman Miller on 11/15/24.
//

import SystemPackage

internal extension CInt {
    
    func throwsError() throws(Errno) {
        guard self >= 0 else {
            throw Errno(rawValue: -self) // error is always negative
        }
    }
}
