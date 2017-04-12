//
// Created by krv on 4/12/17.
//

#ifndef CPPDESIGNPATTERNS_MYSINGLETON_H
#define CPPDESIGNPATTERNS_MYSINGLETON_H

#include <iostream>

// Singleton Design Pattern
class MySingleton {
public:
    static MySingleton &getInstance() {
        // lazy initialized
        static MySingleton instance;
        return instance;
    }

    void hello();

private:
    MySingleton() {}

    // c++ 03
    // Stop the compiler generating methods of copy the object
    // S(S const&);              // Don't Implement.
    // void operator=(S const&); // Don't implement

    // c++ 11
public:
    // Stop the compiler generating methods of copy the object
    MySingleton(MySingleton const &) = delete;
    void operator=(MySingleton const &) = delete;
};


#endif //CPPDESIGNPATTERNS_MYSINGLETON_H
