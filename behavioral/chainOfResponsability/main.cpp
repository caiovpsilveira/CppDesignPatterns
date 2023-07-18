#include "dogHandler.h"
#include "catHandler.h"

int main(int argc, char** argv)
{
    CatHandler firstHandler;
    DogHandler secondHandler;

    firstHandler.setNextHandler(&secondHandler);

    firstHandler.handle(Handler::CatRequest);
    firstHandler.handle(Handler::DogRequest);

    return 0;
}