#include <iostream>
using namespace std;

template <typename T>
bool compare(T a, T b)
{
    if (a == b)
        return true;
    else
        return false;
}
class A
{

public:
    int a;
    bool operator==(A t)
    {
        return a == t.a;
    }
};

int main()
{
    A a, b;
    a.a = 5;
    b.a = 5;
    cout << compare(a, b) << endl;
}