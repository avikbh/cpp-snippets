#include <iostream>
#define  end "\n"
using namespace std;
void add (int n,int m){
cout<<"In add (int n,int m)"<<end;
}
void add (double n,double m){
    cout<<"add (double n,double m)"<<end;
}
void add (int n,double m){
cout<<"In add (int n,double m)"<<end;
}
void add (double n,int m){
    cout<<"add (double n,int m)"<<end;
}
int main()
{
   add(3,5);
add(3.5,5.3);
add(3,5.2);
add(3.8,5);


    return 0;
}