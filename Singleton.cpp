#include "Singleton.h"

GatewaySecurity::GatewaySecurity()
{
    cout << "GatewaySecurity Constructor\n";
}

GatewaySecurity::~GatewaySecurity()
{
    cout << "GatewaySecurity Destructor\n";
}

void GatewaySecurity::IssueTokens(int userID)
{
    cout<<"Toikens Claims Issued for "<<userID<<'\n';
}

void GatewaySecurity::fun1()
{
    cout << "GatewaySecurity::fun1()\n";
}
void GatewaySecurity::fun2()
{
    cout << "GatewaySecurity::fun2()\n";
}
void GatewaySecurity::fun3()
{
    cout << "GatewaySecurity::fun3()\n";
}
