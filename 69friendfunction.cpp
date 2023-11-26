#include<iostream>
using namespace std;
class test
{
    private:
    float a,b;
    public:
    test(){}
    test(float x)
    {
        a=b=x;
    }
    test(float real,float imag)
    {
        a=real;
        b=imag;
    }
    friend  test multiply(test,test);
    friend void show(test);
};
test multiply(test t1,test t2)
{
    test t;
    t.a=t1.a*t2.a;
    t.b=t1.b*t2.b;
    return(t);
}
void show(test t3)
{
    cout<<t3.a<<"+i"<<t3.b<<endl;
}
int main()
{
    test A(5.0,2.0);
    test B(4.0);
    test t3;
    t3=multiply(A,B);
    cout<<"A=";
    show(A);
    cout<<"B=";
    show(B);
    cout<<"t3=";
    show(t3);
    return 0;
}
