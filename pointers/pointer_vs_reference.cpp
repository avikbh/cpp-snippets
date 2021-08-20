//! Program to demonstrate differences between pointer and references
#include<iostream>
using namespace std;

int main(){
    int n1=50;
    int& r1 = n1;

    cout<<sizeof(r1)<<endl;
    cout<<&n1<<" "<<&r1<<endl;
    return 0;
}