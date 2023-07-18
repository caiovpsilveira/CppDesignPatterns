#ifndef MUL_STRATEGY_H
#define MUL_STRATEGY_H

#include "strategy.h"

class MulStrategy : public Strategy
{
public:
    int execute(int a, int b) override { return a * b; }
};

#endif