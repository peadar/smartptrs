// basederived.h

#include <iostream>
#include <memory>

struct Base {
   ~Base() { std::cout << "~Base()\n"; }
};
struct Derived : Base {
   ~Derived() { std::cout << "~Derived()->"; }
};


