#include <iostream>
#include <IStrategy.h>
#include "MySingleton.h"


int main() {

    //singleton
    MySingleton::getInstance().hello();

    // strategy pattern
    IStrategy * ss = new CStrategy_1();
    ss->performAction();

    // strategy pattern C++11 for small functiona
    SuperAction sa;
    IStrategyImplementedC11 aa(sa);
    aa.performAction();

    return 0;

}