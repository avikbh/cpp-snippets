#include<iostream>
#include <list>
using namespace std;

void input_array();

class A{
  public:
    A(){
        cout<<"In A Constructor"<<endl;
    }
};
int& square(int x) {
    int n =(x*x) ;
    return n;
    }


int main(){
   cout<<"Hola Mundo"<<endl; 
// int i=5;
// int j=i++;
// cout<<i<<" "<<j<<endl;
// input_array();

// A a=A();

// int sq = sqare(10);  // square(10) is rvalue
// square(10)=20;
// cout<<sq<<endl;

list<int>::iterator it;
    list<int> l;
    l.assign(5,0);
    it=l.begin();
    l.insert(l.begin(),6);
    l.insert(l.begin(),1,8);
    advance(it,3);
    l.insert(it,4);

for(auto itr : l)
    cout << itr << endl;

// for(auto i=l.begin();i!=l.end();i++)
//         cout << *i << endl;

    return 0;
}


void input_array(){
    int n=0;
    cout<<"Enter no of elements";
    cin >>n;

    int *p =new int[n];
    for(int i=0;i<n;i++)
        cin >> p[i];
    
    for(int i=0;i<n;i++)
    cout<<p[i]<<" ";


}