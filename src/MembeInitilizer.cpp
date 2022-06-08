//
// Created by Rukshan Perera on 2022-06-08.
//
#include "MemberInitializer.h"
#include <iostream>


C2::C2()
    : _value(0)
{
    std::cout << "C2 created : DEFAULT" << std::endl;
    printMe();
}

C2::C2(int x)
    : _value(x)
{
    std::cout << "C2 created - x : " << x << std::endl;
}

void C2::printMe() {
    std::cout << "C2 printMe - _value : " << _value << std::endl;
}


C1::C1() : _c2() {
    std::cout << "Creating C1 - DEFAULT" << std::endl;
    std::cout << "C1 : _value : " << _value << std::endl;
    std::cout << "C1 created : DEFAULT" << std::endl;
}

C1::C1(int y)
    : _c2(y), _value(y)
{
    std::cout << "Creating C1 - DEFAULT" << std::endl;
    _c2.printMe();
    std::cout << "C1 : _value : " << _value << std::endl;
    std::cout << "C1 created - y : " << y << std::endl;
}
