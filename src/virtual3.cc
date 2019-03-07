// virtual3.cc

#include "basederived.h"
int main(int argc, char *argv[]) {
   std::shared_ptr<Derived> derived;
   {
      std::shared_ptr<Base> base;
      derived = std::make_shared<Derived>();
      base = derived;
   }
}
