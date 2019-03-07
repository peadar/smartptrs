// ex-simpleshared.cc

#include "simpleshared.h"
#include "foo.h"

int main() {
   SharedPtr<Foo> s1(new Foo());
   SharedPtr<Foo> s2(s1);
}
