  template<typename _Tp>
    class enable_shared_from_this
    {
    ...
    public:
      shared_ptr<_Tp>
      shared_from_this()
      { return shared_ptr<_Tp>(
            this->_M_weak_this);}

      shared_ptr<const _Tp>
      shared_from_this() const
      { return shared_ptr<const _Tp>(
            this->_M_weak_this); }

    private:
      ...
      mutable weak_ptr<_Tp>  _M_weak_this;
    };
