// simpleshared.h

struct Refcount {
   int count = 1;
};

template <typename T> struct SharedPtr {
   T *ptr;
   Refcount *refcount;
   SharedPtr(T *ptr)
      : ptr(ptr)
      , refcount(new Refcount()) {
   }
   ~SharedPtr() {
      if (--refcount->count == 0) {
         delete refcount;
         delete ptr;
      }
   }
   SharedPtr(const SharedPtr<T> &rhs)
         : ptr(rhs.ptr)
         , refcount(rhs.refcount) {
      ++refcount->count;
   }
};
