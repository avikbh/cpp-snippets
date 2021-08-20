#include<iostream>
#include<bits/stdc++.h>
#include <vector>
using namespace std;

int main(){


   vector<int> v(22);
   for(auto i:v){
       cout<<i<<endl;
   }
bool b = (v[6]);

cout<<"b: "<<b<<endl;
printf("%d", !b);
// Question 9
std:: vector<int> *v1 = new std::vector<int>({1,2,3});
std:: vector<int> *v2;
v2=v1;
v1->push_back(4);
v2->push_back(5);
cout<<"Vector 1"<<endl;
for(auto i:*v1){
       cout<<i <<" ";
   }
cout<<"Vector 2"<<endl;
for(auto i:*v2){
       cout<<i<<" ";
   }
    return 0;
}