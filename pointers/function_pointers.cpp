#include <bits/stdc++.h>
using namespace std;

void fnPrint(){
    cout<<"Hola Mundo"<<endl;
}

int add(int x, int y)
{
    return x + y; 
}

int sub(int x, int y)
{
    return x - y; 
}

int mul(int x, int y)
{
    return x * y; 
}

int divi(int x, int y)
{
    return x / y;
}
using ArithmeticFunction = std::function<int(int, int)>;


int mathoperation(int a,int b, int (*doOp)(int,int))
{
    int res= doOp(a,b);
    return res;
}
int mathoperation2(int a,int b, ArithmeticFunction afn)
{
    // ArithmeticFunction afn = 
    int res= afn(a,b);
    return res;
}

int main(){
    // void (*fnPoint)()=fnPrint;

    // // (*fnPoint)();
    // fnPoint();

    // function <void()> fn= fnPrint;
    // fn();

    // auto fn2= fnPrint;
    // cout << typeid(fn2).name()<<endl;

int a=0,b=0;
char c;

    cout<<"Enter two values and operation."<<endl;
    cin>>a>>b>>c;
int result=0;
switch (c)
{
case '+':
    result=mathoperation(a,b, add);
    break;
case '-':
    result=mathoperation2(a,b, sub);
    break;

default:
    break;
}

cout<<"Result: "<<result;
    return 0;
}