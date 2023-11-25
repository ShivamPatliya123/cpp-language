#include<iostream>
using namespace std;
class B;//forword declaration of class B;
class A
{
    public:
    int a;
    
    void setdata(int x)
    {
        a=x;
    }
    friend void fun(A);
};
class B
{
    public:
    int b;
    void setdata(int y)
    {
        b=y;
    }
    friend void fun(B);
};
void fun(A obj1,B obj2)
{
    cout<<"sub="<<obj1.a-obj2.b;
}
int main()
{
    A obj3;
    B obj4;
    obj3.setdata(3);
    obj4.setdata(6);
    fun(obj3,obj4);
    return 0;
}
