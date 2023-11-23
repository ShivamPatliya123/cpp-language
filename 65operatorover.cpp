#include<iostream>
using namespace std;
class test
{
    private:
    int a,b;
    public:
    void setdata()
    {
        cout<<"Enter the no a,b:\n";
        cin>>a>>b;
    }
    void showdata()
    {
        cout<<"a="<<a<<"b="<<b;
    }
    test operator-(test &c)
    {
        test t;
        t.a=a-c.a;
        t.b=b-c.b;
        return (t);
    }
};
int main()
{
    test t1,t2,t3,t4;
    t1.setdata();
    t2.setdata();
    t3.setdata();
    t4 = t1-t2-t3;
    t4.showdata();
    return 0;
}
