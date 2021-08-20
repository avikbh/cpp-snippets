//! Program to demonstrate the using keyword to access base classes methods
#include<iostream>

using namespace std;

class Base
{
public:
    int fun()
    {
        cout<<"Base::fun() called";
    }
    int fun(int i)
    {
        cout<<"Base::fun(int i) called"<<endl;
    }
};

class Derived: public Base
{
public:
    int fun()
    {
        cout<<"Derived::fun() called"<<endl;
    }

    using Base::fun;  /// if the method is not found in Derived, further looks up in the Base due to "using Base::fun"
};

int main()
{
    Derived d;
    d.fun();  // Derived::fun() called irrespective of using the "using" keyword.
    d.fun(5);  // Base::fun(int i) called. Compiler Error if not using the "using" keyword
    return 0;
}



