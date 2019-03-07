// refcount.h
#include <type_traits>
#include <iostream>
struct RefcountedObject {
    int refcount = 0;
};
template <typename T, typename = typename
        std::enable_if<
            std::is_base_of<RefcountedObject,T>
            ::value>::type>
class RefPtr {
    T *ptr;
public:
   RefPtr(T *ptr) : ptr(ptr) {
       ++ptr->refcount;
   }
   ~RefPtr() {
       if (--ptr->refcount == 0) delete ptr;
   }
   T *operator -> () { return ptr; }
   T &operator * () { return *ptr; }
   RefPtr(const RefPtr<T> &rhs)
      : ptr(rhs.ptr) { ++ptr->refcount; }
};
