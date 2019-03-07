// operatornew.h
#include <memory>
#include <iostream>
void *operator new (std::size_t size) {
   void *p = std::malloc(size);
   std::cerr << "allocate " << size << " bytes at "
      << p << std::endl;
   return p;
}
void operator delete (void *p) {
   std::cerr << "free bytes at " << p << std::endl;
   std::free(p);
}
