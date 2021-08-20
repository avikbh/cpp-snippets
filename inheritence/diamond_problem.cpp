#include <iostream>
using namespace std;

class A{
public:
    int val = 10;
};
class B: virtual public A{}; // If not virtual, comiler error will be thrown
class C: virtual public A{};
class D: public B, public C{};

int main(){
D d;
cout<<d.val<<endl;

B b;
cout<<b.val<<endl;
    return 0;
}