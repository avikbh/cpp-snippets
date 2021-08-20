#include <iostream>
using namespace std;
class A
{
private:
    int i;

public:
    A(int ii = 0) : i(ii) {}
    void show() { cout << "i = " << i << endl; }
};
class B
{
private:
    int x;

public:
    B(int xx) : x(xx) {}
    operator A() const { return A(x); }
};
void g(A a)
{
    a.show();
}
int main()
{
    B b(10); //10
    g(b);    //0
    g(20);   //20
    return 0;
}