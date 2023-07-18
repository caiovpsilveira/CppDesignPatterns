#ifndef CONTEXT_H
#define CONTEXT_H

class State;

class Context
{
public:
    Context(State* initial);
    ~Context();
    void doStuff();
    void transition(State* state);
private:
    State* m_state;
};

#endif