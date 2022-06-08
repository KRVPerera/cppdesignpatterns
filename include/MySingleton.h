//
// Created by krv on 4/12/17.
//

#ifndef CPPDESIGNPATTERNS_MYSINGLETON_H
#define CPPDESIGNPATTERNS_MYSINGLETON_H

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

    // c++ 11
public:
    // Stop the compiler generating methods of copy the object
    MySingleton(MySingleton const &) = delete; // c
    void operator=(MySingleton const &) = delete;
    MySingleton(MySingleton &&) = delete;
    MySingleton & operator=(MySingleton &&) = delete;
};


#endif //CPPDESIGNPATTERNS_MYSINGLETON_H
