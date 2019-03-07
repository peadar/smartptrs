// ex-uniqueptr-assign.cc

#include <memory>
#include "foo.h"
int main() {
   Foo *foo_p = new Foo();
   std::unique_ptr<Foo> foo_ap(foo_p);
   std::unique_ptr<Foo> foo_ap2(foo_ap);
}
