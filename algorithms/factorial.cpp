#include <bits/stdc++.h>
#define RANGE_ERROR 1
using namespace std;

long fact(int n, long m)
{
    // cout<<n<<" "<<m<<endl;
    if (n == 0)
        return m;

    if (m > std::numeric_limits<long>::max() || m < 0)
        throw RANGE_ERROR;
    return fact(n - 1, n * m);
}
int main()
{
    int n;
    while (1)
    {
        cout << "Input the number for factorial:" << endl;
        cin >> n;

        if (n < 0)
            cout << "Number can not be in negative." << endl;
        else
            break;
    }

    try
    {
        cout << "Factorial: " << fact(n, 1) << endl;
    }
    catch (int)
    {
        cout << "Range Error with factorial of:" << n << endl;
    }
    return 0;
}