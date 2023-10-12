#include<iostream>
using namespace std;
class Arthmatic
{
    int a,b,c,d,e,f,g;
    public:
    void add()
    {
        cout<<"\nEnter the no a:";
        cin>>a;
        cout<<"\nEnter the no b:";
        cin>>b;
        c=a+b;
        cout<<"\nAddition of="<<c;
    }
    void sub()
    {
        d=a-b;
        cout<<"\nSubtraction is="<<d;
    }
    void multi()
    {
        e=a*b;
        cout<<"\nmultiply is="<<e;
    }
    void div()
    {
        f=a/b;
        cout<<"\ndivided is="<<f;
    }
    void mod()
    {
        g=a%b;
        cout<<"\nmodules is="<<g;
    }
};
int main()
{
    Arthmatic obj;
    obj.add();
    obj.sub();
    obj.multi();
    obj.div();
    obj.mod();
    return 0;
}
