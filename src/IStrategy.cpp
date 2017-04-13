//
// Created by krv on 4/13/17.
//

#include "IStrategy.h"

void CStrategy_1::performAction() {
    std::cout << "Strategy 1 performing action" << std::endl;
}

IStrategyImplementedC11::IStrategyImplementedC11(Action action) : _action(action){};