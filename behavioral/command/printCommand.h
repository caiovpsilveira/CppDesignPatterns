#ifndef PRINT_COMMAND_H
#define PRINT_COMMAND_H

#include "command.h"

#include <iostream>
#include <string>

class PrintCommand : public Command
{
public:
    PrintCommand(std::string message) : m_message(message) {};
    void execute() override { std::cout << "Printing " << m_message << '\n';};
private:
    std::string m_message;
};

#endif