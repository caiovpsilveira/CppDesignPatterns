#ifndef STRATEGY_H
#define STRATEGY_H

class Strategy
{
public:
    virtual int execute(int a, int b) = 0;
};

#endif