#include<iostream>
using namespace std;
class complex
{
    int a,b;
    public:
    void setdata(int x,int y)
    {
        a=x;
        b=y;
    }
    friend void fun(complex);
};
void fun(complex c)
{
    cout<<"sum is="<<c.a+c.b;
}
int main()
{
    complex c1;
    c1.setdata(3,4);
    fun(c1);
    return 0;
}
