#include "stateB.h"
#include "stateA.h"
#include "state.h"
#include "context.h"

#include <iostream>

void
StateB::doStuff()
{
    std::cout << "State B did stuff\n";
    m_context->transition(new StateA());
}