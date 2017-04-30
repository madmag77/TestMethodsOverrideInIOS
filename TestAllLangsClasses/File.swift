//
//  File.swift
//  TestAllLangsClasses
//
//  Created by Artem Goncharov on 30/04/2017.
//  Copyright © 2017 MadMag. All rights reserved.
//

import Foundation

public class A {
    public func f() {
        print("A")
    }
}

public class B: A {
    override public func f() {
        print("B")
    }
}

public class C: B {
    override public func f() {
        print("C")
    }
}

@objc public class TestSwift: NSObject {
    public func test() {
        let c = C()
        (c as A).f()
        (c as B).f()
        (c as C).f()
    }
}

