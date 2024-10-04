#ifndef SINGLETON_H
#define SINGLETON_H
#include <iostream>
using namespace std;

class GatewaySecurity
{
    friend class Smart_Single;
    static GatewaySecurity *head;

private:
    GatewaySecurity();
    ~GatewaySecurity();
    static GatewaySecurity *make_single();
    static void release();

public:
    void IssueTokens(int userID);
    void fun1();
    void fun2();
    void fun3();
};
#endif // SINGLETON_H
