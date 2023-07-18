#ifndef CAT_HANDLER_H
#define CAT_HANDLER_H

#include "handler.h"

#include <iostream>

class CatHandler : public Handler
{
public:
    void handle(Handler::RequestType request) override
    {
        if (request == RequestType::CatRequest)
        {
            std::cout << "Cat processed request\n";
        }
        else
        {
            Handler::handle(request);
        }
    };
};

#endif