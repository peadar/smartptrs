// foo.h

#include <iostream>
struct Foo {
   int i = 0;
   Foo(){
       std::cout<< "create Foo@" << this
           << std::endl;
   }
   ~Foo(){
       std::cout<< "delete Foo@" <<this
           <<std::endl;
   }
};
