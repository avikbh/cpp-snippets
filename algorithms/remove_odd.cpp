// Program to remove the Odd numbers in a given array

#include<iostream>
#include <set>
using namespace std;


void RemoveOdd(std::set<int> &my_set){

    for(auto it=my_set.begin();it!=my_set.end();){
        if(*it%2!=0)
            my_set.erase(it++);
        else
            ++it;
    }
    for(auto it: my_set){
        cout<<it<<" ";
    }


}

int main(){
    cout<<"Hola Mundo"<<endl;

    set<int> my_set{34,24,543,12,45,43};
    RemoveOdd(my_set);

    return 0;
}