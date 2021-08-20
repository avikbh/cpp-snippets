#include<iostream>
#include <string>
using namespace std;

bool contains(const string &str,const string &val){
    return str.find(val)!=string::npos; 

}

int main(){
    cout<<"Hola Mundo"<<endl;
    string a="Hola Mundo";
    string b;
    b.append("n");
cout<<b<<endl;
    cout<<a.compare("Hola Mundo")<<endl;

    cout<<contains(a, "a")<<endl;
    return 0;
}