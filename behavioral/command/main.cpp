#include "printCommand.h"
#include "saveCommand.h"

#include <queue>

int main()
{
    std::queue<Command*> commandQueue; 

    PrintCommand c1("hello!");
    SaveCommand c2("file.txt", "important stuff");

    commandQueue.push(&c1);
    commandQueue.push(&c2);

    while(!commandQueue.empty())
    {
        auto& cmd = commandQueue.front();
        cmd->execute();
        commandQueue.pop();
    }

    return 0;
}