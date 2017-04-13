#include <iostream>
#include <IStrategy.h>
#include "MySingleton.h"


int main() {

    //singleton
    MySingleton::getInstance().hello();

    // strategy pattern stripped out
    IStrategy * ss = new CStrategy_1();
    ss->performAction();

    // strategy pattern C++11 for small functiona
    SuperAction sa;
    IStrategyImplementedC11 aa(sa);
    aa.performAction();

    CActionContext<CStrategy_1> tempContext;
    tempContext.performAction();

    return 0;

}