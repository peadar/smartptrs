// scopedptr.h

template<typename T> class ScopedPtr {
    T *ptr;
public:
    ScopedPtr(T *ptr) : ptr(ptr) {}
    ~ScopedPtr() { delete ptr; }
    T *operator -> () { return ptr; }
    T &operator * () { return *ptr; }
};
