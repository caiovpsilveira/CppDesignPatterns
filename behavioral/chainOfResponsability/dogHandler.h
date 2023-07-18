#ifndef DOG_HANDLER_H
#define DOG_HANDLER_H

#include "handler.h"

#include <iostream>

class DogHandler : public Handler
{
public:
    void handle(Handler::RequestType request) override
    {
        if (request == RequestType::DogRequest)
        {
            std::cout << "Dog processed request\n";
        }
        else
        {
            Handler::handle(request);
        }
    };
};

#endif