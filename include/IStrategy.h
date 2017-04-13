//
// Created by krv on 4/13/17.
//

#ifndef CPPDESIGNPATTERNS_ISTRATEGY_H
#define CPPDESIGNPATTERNS_ISTRATEGY_H


#include <iostream>
#include <functional>

class IStrategy {
public:
    virtual void performAction() = 0;

    virtual ~IStrategy() = default;
};

class CStrategy_1 : public IStrategy {
public:
    virtual void performAction();
};

class IStrategyImplementedC11 {
public:
    using Action = std::function<void()>;
    IStrategyImplementedC11(Action action);
    void performAction() {
        _action();
    }

private:
    Action _action;
};

struct SuperAction {
    void operator()() {
        std::cout << "This is superaction being performed" << std::endl;
    }
};

#endif //CPPDESIGNPATTERNS_ISTRATEGY_H
