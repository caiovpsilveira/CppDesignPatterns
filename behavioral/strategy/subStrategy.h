#ifndef SUB_STRATEGY_H
#define SUB_STRATEGY_H

#include "strategy.h"

class SubStrategy : public Strategy
{
public:
    int execute(int a, int b) override { return a - b; }
};

#endif