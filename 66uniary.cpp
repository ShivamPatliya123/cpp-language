#include<iostream>
using namespace std;
class test
{
    public:
    int a,b;
    void setdata(int x,int y)
    {
        a=x;
        b=y;
    }
    void showdata()
    {
        cout<<"a="<<a<<"\n"<<"b="<<b;
    }
    test operator--()
    {
        test t;
        t.a=--a;
        t.b=--b;
        return(t);
    }
};
int main()
{
    test t1,t2;
    t1.setdata(3,4);
    t2=(--t1);
    t2.showdata();
    return 0;
}
