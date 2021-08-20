// Program to demonstrate how to stop creating a object of a class dynamically

#include<iostream>
using namespace std;


class A
{
    private:
    void* operator new(size_t size);
   public:
   A(){};

};
int main(){
    cout<<"Hola Mundo"<<endl;
    A t;
    // A a= new A(); // Won't work.

    
    return 0;
}