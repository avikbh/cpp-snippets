#include <iostream>
using namespace std;

class Base
{
    int x;

public:
    virtual void print()
    {
        cout << "Base\n";
    }
};

class Derived : public Base
{
    int x;

public:
    void print()
    {
        cout << "Derived\n";
    }
};
void fnPrint(Base& b) // If not passed as reference, it will print Base. Object will be sliced
{
    b.print();
}

int main()
{
    cout << "Hola Mundo" << endl;
    Derived d;
    fnPrint(d);

    return 0;
}