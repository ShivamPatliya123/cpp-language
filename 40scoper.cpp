#include<iostream>
using namespace std;
class A
{
    public:
    int a;
};
class B:public A 
{
    public:
    int b;
};
class C : public A 
{
    public:
    int c;
};
class D: public B,public C 
{
    public:
    int d;
};
int main()
{
    class D obj;
    obj. B :: a=10;
    obj. C :: a=100;
    obj.b=20;
    obj.c=40;
    obj.d=30;
    cout<<"\n A from class B:"<<obj. B :: a;
    cout<<"\n A from class C:"<<obj. C :: a;
    cout<<"\n B:"<<obj.b;
    cout<<"\n C:"<<obj.c;
    cout<<"\n D:"<<obj.d;
    return 0;
}
