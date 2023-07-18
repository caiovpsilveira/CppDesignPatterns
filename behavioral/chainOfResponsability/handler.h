#ifndef HANDLER_H
#define HANDLER_H

class Handler
{
public:

    enum RequestType
    {
        DogRequest,
        CatRequest,
    };

    virtual void handle(RequestType request)
    {
        if(m_nextHandler) m_nextHandler->handle(request);
    };

    void setNextHandler(Handler* next) { m_nextHandler = next; }
private:
    Handler* m_nextHandler;
};

#endif