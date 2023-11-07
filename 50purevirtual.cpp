#include<iostream>
using namespace std;
class A
{
    public:
    virtual void getdata()=0;
};
class B: public A 
{
    public:
    int b;
    void virtual getdata()

    {
        cout<<"\n from derive class B:";
        cout<<"\n Enter b:";
        cin>>b;
        cout<<"\n B="<<b;
    }
};

class C:public A 
{
    public:
    int c;
    void virtual getdata()
    {
        cout<<"\n from derive class c:";
        cout<<"\n enter c:";
        cin>>c;
        cout<<"\n C="<<c;

    }
   
   
};
int main()
{
    A *p;
    B obj;
    p=&obj;
    p->getdata();
    C obj1;
    p=&obj1;
    p->getdata();
    return 0;
}
