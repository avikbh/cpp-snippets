#include <bits/stdc++.h>

using namespace std;

template <class T>
class LVector
{
    vector<T> vec;

public:
    LVector()
    {
    }

    void push(T val)
    {
        vec.push_back(val);
    }

    T getLargest()
    {
        return *max_element(vec.begin(), vec.end());
    }
};

int main()
{

    LVector<int> v;
    v.push(5);
    v.push(15);
    v.push(10);
    v.push(3);

    cout << v.getLargest() << endl;

    return 0;
}
