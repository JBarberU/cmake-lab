#include "Bar.hpp"

#include <Foo.hpp>

Bar::Bar()
{
    Foo f;
    f.printFoo("Bar's constructor");
}

Bar::~Bar()
{
    Foo f;
    f.printFoo("Bar's destructor");
}

