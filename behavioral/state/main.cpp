#include "context.h"
#include "stateA.h"

int main(int argc, char** argv)
{
    Context c(new StateA());

    c.doStuff(); // will internaly update to state B.
    c.doStuff(); // will internaly update do state A.
    c.doStuff();

    return 0;
}