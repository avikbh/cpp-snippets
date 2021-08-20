#include<iostream>
using namespace std;


class Int
{
    int n;
public:
    Int(int n) : n{n} {};

    operator string (){
        return to_string(n);
    }
    operator int ()
    {
        return n;
    }
};

int main()
{
    Int obj(30); // Normal Constructor
    obj = 40;    // Conversion Constructor

    obj = static_cast<int> (50); // Same as above but recommended way of conversion.

    string str = obj; // Conversion Operator

    string str2 = static_cast<string> (obj); // Same as above but recommended way of conversion.

    cout<<obj<<endl; // Another example of Conversion Operator
    
    return 0;
}