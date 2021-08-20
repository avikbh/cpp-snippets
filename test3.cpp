#include<iostream>
using namespace std;

int main(){
    int track[]={10,20,30,40},*striker;

striker=track;

track[1]+=30;
cout<<"Striker>"<<*striker<<endl;

*striker-=10;
striker++;
cout<<*striker<<endl;
striker+=2;
cout<<*striker<<endl;
cout<<track[0]<<endl;


    return 0;
}