#include<iostream>
using namespace std;
class simple
{
    public:
    int a,b;
    simple()
    {
        cout<<"\n Enter the no of a and b";
        cin>>a>>b;
       // cout<<a<<endl<<b<<endl;
    }
    simple(simple &c)//copy constructer;
    {
        a=c.a;
        b=c.b;
        cout<<a<<endl<<b<<endl;
    }
};
int main()
{
    simple c1;
    simple c2(c1);
    return 0;
}
