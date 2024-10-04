#ifndef SMART_SINGLE_H
#define SMART_SINGLE_H

#include "Singleton.h"
#include "Exception.h"
// #include <functional>
class Smart_Single
{
    GatewaySecurity *gateway_security;
    static int count;
    static void *operator new(size_t) = delete;
    static void *operator new[](size_t) = delete;
    static void operator delete(void *) = delete;
    static void operator delete[](void *) = delete;

public:
    using FPTR = void (GatewaySecurity::*)();
    explicit Smart_Single();
    GatewaySecurity *operator->();
    int use_count();
    GatewaySecurity &operator*();
    Smart_Single &operator->*(FPTR fp);

    void operator()()
    {
        (gateway_security->*fp)();
    }
    
    ~Smart_Single();

private:
    FPTR fp{nullptr};
};

#endif // SMART_SINGLE_H
