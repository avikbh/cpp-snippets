#include<iostream>
using namespace std;

class A{
    
    public:
    A(){
        cout<<"In A Constructor"<<endl;
    }
    ~A(){
        cout<<"In A Desstructor"<<endl;
    }
    void method1(){
        cout<<"In Method 1"<<endl;
    };
};

class B: public A{
    public:
    B(){
        cout<<"In B Constructor"<<endl;
    }
    ~B(){
        cout<<"In B Desstructor"<<endl;
    }
     void method2(){
        cout<<"In Method 2"<<endl;
    };
};

int main(){
    A *a= new B();
    // B *b = new A(); // wont work
    a->method1();
    // a->method2(); // won't work

    A aa;
    aa=A();
    A h;
    B k;
    h=k;        // will work: a derived class object can be assigned to a base class object
    // k=h;     // won't work: the other way is not possible.
    return 0;
}