#ifndef FUNCTION_HPP
#define FUNCTION_HPP

#include "Smart_Single.h"

void function()
{
    Smart_Single ss1;
    try
    {
        ss1->IssueTokens(98);
        ss1->fun1();
        // ss1->fun2();
        // ss1->fun3();
        // cout << ss1.use_count() << "\n";
    }
    catch (CustomException ce1)
    {
        cout << ce1.what() << "\n";
    }

    // Smart_Single ss2;
    // cout << ss2.use_count() << "\n";
    // Smart_Single ss3;
    // cout << ss3.use_count() << "\n";
}
void TestMember(Smart_Single &sm, Smart_Single::FPTR fp)
{
    (sm->*fp)();
}

void Test()
{
    Smart_Single ss4;
    TestMember(ss4, &GatewaySecurity::fun1);
}

#endif // FUNCTION_HPP
