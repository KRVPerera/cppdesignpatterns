//
// Created by Rukshan Perera on 2022-06-08.
//

#ifndef CPPDESIGNPATTERNS_MEMBERINITIALIZER_H
#define CPPDESIGNPATTERNS_MEMBERINITIALIZER_H

class C2 {
private:
    int _value;
public:
    C2();
    C2(int x);
    void printMe();
};

class C1 {
private:
    C2 _c2;
    int _value;
public:
    C1();
    C1(int y);
};

#endif //CPPDESIGNPATTERNS_MEMBERINITIALIZER_H
