//
//  c_plus_plus.cpp
//  TestAllLangsClasses
//
//  Created by Artem Goncharov on 29/04/2017.
//  Copyright © 2017 MadMag. All rights reserved.
//

#include "c_plus_plus.hpp"

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

void A::v() { std::cout << "A" << std::endl; }
void A::f() { std::cout << "A" << std::endl; }

void B::v() { std::cout << "B" << std::endl; }
void B::f() { std::cout << "B" << std::endl; }

void C::v() { std::cout << "C" << std::endl; }
void C::f() { std::cout << "C" << std::endl; }

void testCPP() {
    A * a = new C;
    std::cout << "Virtual functions:" << std::endl;
    a->v();
    ((B*)a)->v();
    ((C*)a)->v();
    
    std::cout << "Plain functions:" << std::endl;
    a->f();
    ((B*)a)->f();
    ((C*)a)->f();
}
