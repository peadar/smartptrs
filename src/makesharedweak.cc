#include "foo.h"
#include "operatornew.h"

int main() {
   {
      std::weak_ptr<Foo> weak;
      {
         auto shared = std::make_shared<Foo>();
         weak = shared;
      }
      std::cout << "shared pointer out of scope\n";
   }
   std::cout << "weak pointer out of scope\n";

}
