// ex-sharedptr.cc

#include <memory>
#include "foo.h"

int main() {
   Foo *f = new Foo();
   std::shared_ptr<Foo> s1(f);
   std::shared_ptr<Foo> s2(s1);
}
