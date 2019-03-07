// ex-scopedptr.cc
#include "scopedptr.h"
#include "foo.h"
#include <iostream>
int main() {
    ScopedPtr<Foo> foop(new Foo());
    Foo &foor = *foop;
    ++foor.i;
    std::clog << "i is "
        << foop->i << std::endl;
}
