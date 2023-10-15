#include<iostream>
using namespace std;
class Area
{
    int a,b,h,r,s;
    public:
    void input()
    {
        cout<<"\n1. Area of triangle 2.Area of square 3.Area of circle:";
        cout<<"\nEnter the your choice";
        cin>>a;
    }
    void rule1()
    {
        if(a==1)
        {
            cout<<"\nEnter base and height:";
            cin>>b>>h;
        }
        if(a==2)
        {
          cout<<"\nEnter Area of side:";
            cin>>s;  
        }
        if(a==3)
        {
           cout<<"\nEnter radius:";
            cin>>r;  
        }
    }
    void rule2()
    {
        if(a==1)
        cout<<"Area of triangle:"<<(.5*(b*h));
        if(a==2)
        cout<<"Area of Square:"<<s*s;
        if(a==3)
        cout<<"Area of circle:"<<(3.14*(r*r));
    }
};
int main()
{
    Area obj;
    obj.input();
    obj.rule1();
    obj.rule2();
    return 0;
}
