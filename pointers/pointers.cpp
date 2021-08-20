#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int *fun()
{
    int y = 7;
    return &y;
}

int main()
{

    char *c = "Avik";

    cout << &c << " " << sizeof(c) << " " << sizeof(*c) << endl; // Output: 0x7fffffffdc28 8 1

    c = "Hola Mundo";

    cout << &c << " " << sizeof(c) << " " << sizeof(*c) << endl; // Output: 0x7fffffffdc28 8 1

    char d[] = {'M', 'U', 'N', 'D', 'O'};
    string str = "Hola";

    cout << c << endl;            // Output: Hola Mundo
    cout << sizeof(c) << endl;    // Output: 8
    cout << sizeof("cc") << endl; // Output: 3
    cout << sizeof(str) << endl;  // Output: 32 :string class takes 32 bytes space 
    cout << sizeof(char) << endl;  // Output: 1
    cout << sizeof(string) << endl;  // Output: 32 :string class takes 32 bytes space 
    cout << str.size() << endl;   // Output: 4
    cout << strlen(c) << endl;    // Output: 10
    cout << strlen(d) << endl;    // Output: 5
    size_t found = str.find('a');

    if (found == string::npos)
        cout << "not found" << endl;
    else
        cout << "found" << endl; // Output: found
    int i = 0;
    for (int i = 0; i < str.size(); i++)
        cout << str[i]; // Output: Hola
    for (auto it = str.begin(); it != end(str); it++)
        cout << *it; // Output: Hola

    cout << endl;
    // int *j = fun();
    // cout<<*j; // This will cause segmentation fault.
    int n = 5;
    int *p = &n;
    cout << "n: " << n << " *p: " << *p << endl; // n: 5 *p: 5
    n = 10;
    cout << "n: " << n << " *p: " << *p << endl; // n: 10 *p: 10
    *p = 15;
    cout << "n: " << n << " *p: " << *p << endl; // n: 15 *p: 15

    // Void Pointers

    void *v=&n; //valid
    cout << "&n: " << &n<< " n: " << n << " v: " << static_cast<int*> (v)<< " *v: " << * static_cast<int*> (v) << endl; // &n: 0x7fffffffdc10 n: 15 v: 0x7fffffffdc10 *v: 15
    // int *inp = v; // Invalid
    void *vptr= v;

    return 0;
}