#ifndef ADD_STRATEGY_H
#define ADD_STRATEGY_H

#include "strategy.h"

class AddStrategy : public Strategy
{
public:
    int execute(int a, int b) override { return a + b; };
};

#endif