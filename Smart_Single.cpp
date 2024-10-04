#include "Smart_Single.h"

GatewaySecurity *GatewaySecurity::head = nullptr;

GatewaySecurity *GatewaySecurity::make_single()
{
    if (head == nullptr)
    {
        head = new GatewaySecurity();
    }
    return head;
    // return nullptr;
}
void GatewaySecurity::release()
{
    delete head;
    head = nullptr;
}
int Smart_Single::count = 0;

Smart_Single::Smart_Single()
{
    try
    {
        gateway_security = GatewaySecurity::make_single();
        if (nullptr == gateway_security)
        {
            throw CustomException("Null pointer");
        }
        else
        {
            count++;
        }
    }
    catch (CustomException ce)
    {
        cout << ce.what() << "\n";
    }
}

GatewaySecurity *Smart_Single::operator->()
{
    if (gateway_security == nullptr)
    {
        throw CustomException("Could Not overload because of null pointer");
    }
    return gateway_security;
}
GatewaySecurity &Smart_Single::operator*()
{
    return *gateway_security;
}
Smart_Single &Smart_Single::operator->*(FPTR fp)
{
    this->fp = fp;
    return *this;
}
int Smart_Single::use_count()
{
    return count;
}
Smart_Single::~Smart_Single()
{
    count--;
    if (0 == count)
    {
        GatewaySecurity::release();
    }
}