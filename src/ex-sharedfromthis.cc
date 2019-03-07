// ex-shared-from-this.cc

#include <iostream>
#include <memory>
struct Foo;
static void f(const std::shared_ptr<Foo> &foop) {
    std::cout << "got a Foo@" << foop << std::endl;
}

struct Foo : std::enable_shared_from_this<Foo> {
   int i = 0;
   Foo() { }
   void m() { f(shared_from_this()); }
};

int main() {
    auto sp = std::make_shared<Foo>();
    sp->m();
    Foo *rawp = new Foo();
    rawp->m();
}
