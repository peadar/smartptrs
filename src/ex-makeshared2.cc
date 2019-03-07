// ex-makeshared2.cc

#include "operatornew.h"
#include "foo.h"
int main() {
    std::shared_ptr<Foo> p =
        std::make_shared<Foo>();
}
