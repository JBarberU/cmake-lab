#include "Foo.hpp"

#include <iostream>

void Foo::printFoo(const std::string &message)
{
    std::cout << "Foo wrote \"" << message << '"' << std::endl;
}
