#include "Bar.hpp"

#include <Foo/Foo.hpp>

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

