#include<iostream>
using namespace std;


class implement_spointer
{
private:
    int *data;
public:
    explicit implement_spointer(int *p = nullptr){data=p;};
    ~implement_spointer(){delete data;};

    int& operator*(){return *data;}
};

int main(){
    int *n = new int(12);
    implement_spointer sp(n);
    // implement_spointer sp= implement_spointer(n); //Does same job

    cout<<*sp;
    return 0;
}