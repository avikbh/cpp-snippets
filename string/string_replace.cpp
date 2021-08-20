// This program replaces words in param1 with comma separated words in param2 but in reverse order.

// Example: 
// param1 - "Avik is a good boy. He is good in sports. He is also good in coding...."
// param2 - "is,good..."

// output - "Avik si a doog boy. He si doog in sports. He si also doog in coding...."

#include <bits/stdc++.h>

using namespace std;
string reverse(string);

template <typename T>
void displayContainer(T cont)
{
    for (auto itr : cont)
        cout << itr << " ";
        cout<<endl;
}
string func(string param1, string param2)
{
    vector<string> vec;
    stringstream strm(param2);
    while (strm.good())
    {
        string substr;
        getline(strm, substr, ',');
        vec.push_back(substr);
    }

    vector<string> vec2;
    string str;
    stringstream strm2(param1);
    while (strm2 >> str)
        vec2.push_back(str);

    displayContainer(vec);
    displayContainer(vec2);

    for (auto v : vec)
    {
        auto it = std::find(vec2.begin(), vec2.end(), v);
        while (it != vec2.end())
        {
            auto index = distance(vec2.begin(), it);
            string tmp = "" + v;
            vec2[index] = reverse(v); //"Hola";
            it = std::find(vec2.begin(), vec2.end(), v);
        }
    }

    displayContainer(vec2);

    return "";
}

string reverse(string str)
{
    string ret = "";
    for (int i = str.length() - 1; i >= 0; i--)
        ret = ret + str[i];

    return ret;
}

int main()
{
    // Write C++ code here
    std::cout << "Hello world!" << endl;

    string param1 = "Avik is a good boy. He is good in sports. He is also good in coding";
    string param2 = "is,good";

    func(param1, param2);

    return 0;
}