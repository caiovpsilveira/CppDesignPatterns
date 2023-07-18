#ifndef SAVE_COMMAND_H
#define SAVE_COMMAND_H

#include "command.h"

#include <iostream>

class SaveCommand : public Command
{
public:
    SaveCommand(std::string filename, std::string content)
        : m_filename(filename), m_content(content) {};
    void execute() override
    {
        std::cout << "Saving " << m_content << " on file " << m_filename << '\n';
    }
private:
    std::string m_filename;
    std::string m_content;
};

#endif