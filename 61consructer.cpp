#include<iostream>
using namespace std;
class complex
{
    private:
    int a,b;
    public:
    complex(int x,int y)//parameterized constructer
    {
        a=x;
        b=y;
        cout<<"\n"<<a<<"\n"<<b;
    }
    complex(int k)
    {
        a=k;
        cout<<"\n"<<a;
    }
    complex()//default constructer
    {
    }
    complex(complex &c)// copy constructer
    {
        a=c.a;
        b=c.b;
        cout<<"\n"<<a<<"\n"<<b;
    }
};
int main()
{
    complex c1(3,4);
    complex c2(5);
    complex c3();
    complex c4(c1);
    return 0;
}
