#ifndef STATE_H
#define STATE_H

class Context;

// State interface
class State
{
public:
    State() = default;
    virtual ~State() {};
    virtual void doStuff() = 0;
    void setContext(Context* c) { m_context = c; }
protected:
    // required to transition to next state. It could also return the next state on context call
    Context* m_context;
};

#endif