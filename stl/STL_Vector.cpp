#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
template <class T>
void printVec(const vector<T> &v)
{
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;
}
int main()
{

    // void VectorDemo
    vector<int> vec = {32, 87, 11, 45, 77, 87, 43, 22, 97};
    printVec(vec);
    sort(vec.begin(), vec.end());
    printVec(vec);
    sort(vec.begin(), vec.end(), [](int x, int y) {
        return x > y;
    });
    printVec(vec); //print in decending order

    vector<int> vec2(5);
    printVec(vec2); //Print 5 0s

    vector<int> vec3{50};
    printVec(vec3); //Print 50

    vector<int> vec4;
    printVec(vec4); //Print Nothing

    // search if the vec is decending sorted.
    auto an = binary_search(vec.begin(), vec.end(), 33, [](int x, int y) {
        return x > y;
    });
    cout << "Search key exists? " << an << endl;

    vec.insert(vec.begin() + 2, 43);
    printVec(vec);

    vector<int> vect;
    cout << vect.at(3); // Throws 'std::out_of_range' exception

    /// Taking input from user
    // int input;
    // vector<int> vecIn;
    // while (cin >> input)
    //     vecIn.push_back(input);
    // printVec(vecIn);

    return 0;
}