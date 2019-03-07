// bad-simpleshared.cc

#include "simpleshared.h"
#include "foo.h"

int main() {
   Foo *f = new Foo();
   SharedPtr<Foo> s1(f);
   SharedPtr<Foo> s2(f);
}
