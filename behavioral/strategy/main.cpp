#include "context.h"
#include "mulStrategy.h"
#include "subStrategy.h"
#include "addStrategy.h"

#include <iostream>

int main(int argc, char** argv)
{
    Context c;
    c.setStrategy(std::make_unique<MulStrategy>());
    std::cout << c.executeStrategy(10, 5) << '\n';

    c.setStrategy(std::make_unique<SubStrategy>());
    std::cout << c.executeStrategy(20, 5) << '\n';

    c.setStrategy(std::make_unique<AddStrategy>());
    std::cout << c.executeStrategy(1, 2) << '\n';

    return 0;
}