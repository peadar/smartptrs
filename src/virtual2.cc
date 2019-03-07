// virtual2.cc

#include "basederived.h"
int main(int argc, char *argv[]) {
   std::shared_ptr<Base> base;
   {
      std::shared_ptr<Derived> derived;
      derived = std::make_shared<Derived>();
      base = derived;
   }
}
