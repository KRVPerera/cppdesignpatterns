#include <iostream>
#include "MySingleton.h"


int main() {

    MySingleton::getInstance().hello();
    return 0;

}