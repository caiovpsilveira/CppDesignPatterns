#include "stateA.h"
#include "stateB.h"
#include "context.h"

#include <iostream>

void
StateA::doStuff()
{
    std::cout << "State A did stuff\n";
    m_context->transition(new StateB());
}