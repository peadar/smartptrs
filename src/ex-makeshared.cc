// ex-makeshared.cc

#include "operatornew.h"
#include "foo.h"
int main() {
   std::shared_ptr<Foo> p(new Foo());
}
