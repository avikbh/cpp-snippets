#include<iostream>
using namespace std;

int main(){
    cout<<"Hola Mundo"<<endl;
    const int a1=5;
    const int* b1=&a1;

    int *ip = const_cast<int *>(b1);
    *ip =15; //Invalid and Undefined behaviour

    int a2=10;
    const int * b2=&a2;
    int *ip2 = const_cast<int *>(b2);
    *ip2 =25; //Valid Code


    return 0;
}