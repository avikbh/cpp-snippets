#include <bits/stdc++.h>
using namespace std;

class foo
{
    int len;
    char *str;

public:
    foo()
    {
        len = 0;
        str = new char(len);
    }
    foo(char *ptr)
    {
        len = strlen(ptr);
        str = new char(len);
        strcpy(str, ptr);
    }

    friend char *operator+(foo &f1, foo &f2);
    friend void display(foo &f);
};

char *operator+(foo &f1, foo &f2)
{
    string str;
    int len = strlen(f1.str) + strlen(f2.str);
    char *temp = new char(len);

    strcpy(temp, f1.str);
    strcat(temp, f2.str);

    return temp;
}

void display(foo &f)
{
    cout << f.str << endl;
}

int main()
{
    foo str1("hello");
    foo str2(" world");
    foo result = str1 + str2;

    display(result);
    return 0;
}