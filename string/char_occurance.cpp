//! Program to find the number of character occurances in a given string.
// Time complexity: O(N)
// Space Complexity: O(N)

#include<iostream>
#include <map>
using namespace std;

void findOccurrence(string &str){
    int size = str.size();
    map<char, int> mp;

    for(int i =0;i<size;i++){
        mp[str[i]]++;
    }
    for(auto n:mp){
        cout<<n.first<<" Occurred "<<n.second<<" Times"<<endl;
    }

}

int main(){
    string str = "aabbabaac";
    findOccurrence(str);
    return 0;
}