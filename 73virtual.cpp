#include<iostream>
using namespace std;
class A
{
    int a;
    public:
    virtual void f1(int x)
    {
        a=x;
    }
    virtual void showdata()
    {
        cout<<"\na="<<a;
    }
};
class B:public A 
{
    int b;
    public:
    void f1(int x)
    {
        b=x;
    }
    void showdata()
    {
        cout<<"\nb="<<b;
    }
};
int main()
{
    A *p ,obj1;
    B obj;
    p=&obj;
    p->f1(7);
    p->showdata();
    p=&obj1;
    p->f1(4);
    p->showdata();
    return 0;
}
