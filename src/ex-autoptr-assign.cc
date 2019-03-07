// ex-autoptr-assign.cc

#include <memory>
#include "foo.h"
int main() {
   Foo *foo_p = new Foo();

   std::auto_ptr<Foo> foo_ap(foo_p);
   std::auto_ptr<Foo> foo_ap2(foo_ap);
   std::auto_ptr<Foo> foo_ap3 = foo_ap2;

   std::cout << "foo_ap = "
       << foo_ap.get() << std::endl;
   std::cout << "foo_ap2 = "
       << foo_ap2.get() << std::endl;
   std::cout << "foo_ap3 = "
       << foo_ap3.get() << std::endl;
}
