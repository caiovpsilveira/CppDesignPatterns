#include "context.h"
#include "state.h"

Context::Context(State* initial)
: m_state(initial)
{
    m_state->setContext(this);
}

Context::~Context()
{
    if (m_state) delete m_state;
}

void
Context::transition(State* state)
{
    if (!m_state) delete m_state;
    m_state = state;
    m_state->setContext(this);
}

void
Context::doStuff()
{
    m_state->doStuff();
}