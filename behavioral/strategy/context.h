#ifndef CONTEXT_H
#define CONTEXT_H

#include "strategy.h"

#include <memory>

class Context
{
public:
    void setStrategy(std::unique_ptr<Strategy>&& s) { m_strategy = std::move(s); }
    int executeStrategy(int a, int b) { return m_strategy->execute(a, b); }
private:
    std::unique_ptr<Strategy> m_strategy;
};

#endif