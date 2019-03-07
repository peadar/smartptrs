#include "foo.h"
#include <memory>

void test_weak(const std::weak_ptr<Foo> &weak) {
    std::shared_ptr<Foo> shared = weak.lock();
    std::cout << "converted weak to shared: "
        << shared << std::endl;
}

int main() {
    std::weak_ptr<Foo> weak;
    {
        auto shared = std::make_shared<Foo>();
        weak = shared;
        test_weak(weak);
    }
    test_weak(weak);
}
