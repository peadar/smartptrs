// ex-refcount.cc

#include "refcount.h"
#include <iostream>

struct Foo : public RefcountedObject {
   int i = 0;
   Foo() {
       std::cout << "create Foo@"
           << this <<std::endl;
   }
   ~Foo() {
       std::cout<<"destroy Foo@"
           << this << std::endl;
   }
};

int main() {
   Foo *foo = new Foo();
   RefPtr<Foo> foop(foo);
   RefPtr<Foo> foop2(foo);
   RefPtr<Foo> foop3 = foop2;
}
