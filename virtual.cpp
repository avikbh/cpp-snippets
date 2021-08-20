#include <iostream>
using namespace std;

class A
{
public:
    virtual void display()
    {
        cout << "In Base" << endl;
    }
};

class B : public A
{
public:
 virtual   void display()
    {
        cout << "In Derived" << endl;
    }

    // virtual void display1()
    //     {
        // }
        //  virtual void display2()
        // {
        // }
};

class C {
    int a;
    int *ptr;
    static int si;
    int &j;
};

int main()
{
    A *a = new B();
    a->display();

    cout<<sizeof(A)<<endl;
    cout<<sizeof(B)<<endl;
    cout<<sizeof(C)<<endl;

    return 0;
}