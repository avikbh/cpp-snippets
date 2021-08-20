#include <iostream>
using namespace std;

class Mul
{
    int val;

public:
    Mul() {}
    Mul(int n) : val(n) {}

    int operator()(int arg)
    {
        return val * arg;
    }
};

int main()
{
    Mul m1(5);
    cout << m1(3) << endl;
    cout << m1(7) << endl;

    Mul m2(10);
    cout << m2(2) << endl;
    cout << m2(5) << endl;
    return 0;
}