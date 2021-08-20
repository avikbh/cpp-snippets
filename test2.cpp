// Q2.
// Write a program for the below mentioned question.
// Create three variables : a,b & c
// In the code, assign them some random integer values.
// Print the three numbers in ascending order, separated by commas.
// For example: Let a =1, b= 5, c= 2. Output = 1,2,5

#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    // set<int> s;
    // s.insert(a);
    // s.insert(b);
    // s.insert(c);
    // string out = "";

    // for (auto itr : s)
    // {
    //     out.append(to_string(itr));
    //     out.append(",");
    // }
    // cout << out.substr(0, out.length() - 1);

int d=c;
    a= a>b?b:a;
    // b= b>c?c:b;
    // c= 
    if(b>c)
        b=c;
    else
        c=b;

    cout<<a<<","<<b<<","<<c;

    return 0;
}