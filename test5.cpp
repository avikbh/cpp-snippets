#include <iostream>
using namespace std;

bool is_number(const string &s){
    for(int i=0;i<s.length();i++){
        if(isdigit(s[i])==false)
        return false;
    }
    return true;

}

int main() {
    // int n=0, temp = 0;

    // cin >> n;

    // int rem=0;

    // while(n != 0) {
    //     rem = n%10;
    //     temp = temp*10 + rem;
    //     n = n/10;
    // }

    // cout << temp;

    cout<<is_number("234FF");

    return 0;
}