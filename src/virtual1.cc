#include "basederived.h"

int main(int argc, char *argv[]) {
   std::shared_ptr<Base> sbase( new Derived() );
   std::unique_ptr<Base> ubase( new Derived() );
}
