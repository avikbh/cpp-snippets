#include<iostream>
using namespace std;

int main(){
    cout<<"Hola Mundo"<<endl;
    int *ptr = new int [5];
    for (int i=0;i<5;i++){
        ptr[i] = 20*(i+1);
    }
   for (int i=0;i<5;i++){
        cout<< ptr[i] <<" ";
    }

    delete [] ptr;

cout<<endl;
    return 0;
}