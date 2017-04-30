//
//  c_plus_plus.hpp
//  TestAllLangsClasses
//
//  Created by Artem Goncharov on 29/04/2017.
//  Copyright © 2017 MadMag. All rights reserved.
//

#ifndef c_plus_plus_hpp
#define c_plus_plus_hpp

#include <stdio.h>

class A
{
public:
    virtual void v();
    void f();
};

class B : public A
{
public:
    virtual void v();
    void f();
};

class C : public B
{
public:
    virtual void v();
    void f();
};

void testCPP();

#endif /* c_plus_plus_hpp */
