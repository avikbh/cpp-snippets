#include<iostream>
using namespace std;

class Test{
    public:
    static int n;
    int getInt();
};

int Test::getInt(){
return n;
}

int Test::n =0;

int main(){
    cout<<"Hola Mundo"<<endl;

    Test t;
    t.n=6;

    Test::n=100;

    cout<<t.getInt()<<endl;
    return 0;
}