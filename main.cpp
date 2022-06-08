#include <iostream>
#include <IStrategy.h>
#include <MyFactory.h>
#include "MySingleton.h"
#include "MemberInitializer.h"


int main() {

//    //singleton
//    MySingleton::getInstance().hello();
//
//    // strategy pattern stripped out
//    IStrategy *ss = new CStrategy_1();
//    ss->performAction();
//
//    // strategy pattern C++11 for small functiona
//    SuperAction sa;
//    IStrategyImplementedC11 aa(sa);
//    aa.performAction();
//
//    CActionContext<CStrategy_1> tempContext;
//    tempContext.performAction();
//
//    // Framework like Factory usage
//    MyFactory mfac;
//
//    mfac.NewDocument("Test1");
//    mfac.NewDocument("Test2");
//    mfac.ReportDocs();

    C1 c1(4);

    return 0;

}