#include <iostream>
using namespace std;

class Int
{
    int n;
public:
    Int(int n) : n{n} {};
};

int main()
{
    Int i(30);
    i = 40;

    return 0;
}