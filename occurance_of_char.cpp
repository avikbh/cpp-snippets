// Q1. Write a program for the below mentioned question:
// Create a string variable, str1 and assign it some value, say “abcd”
// Find the number of times the letter ‘a’ occurs in str1 and print the count to console.
// For example, if str1 = aba, the output should be 2
// Note: You can take syntax help from w3schools.com

#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
    string str;
    cin>>str;
    int cnt=0;
    for (int i = 0; i < str.length(); i++)
    {
        if(str[i]=='a') 
            cnt++;       
    }
cout<<"count of a: "<<cnt;   

    return 0;
}