#include<iostream>
using namespace std;  
class test
{
    int a;
    float b;
    char c;
    double d;
    public:
    test ()
    {
        cout<<"\n No argument constructer";
    }
    test(int i,float j,char k,double l)
    {
        cout<<"\ncostructer with 4 argument:";
        a=i;
        b=j;
        c=k;
        d=l;
    }
    test(int i,float j)
    {
        cout<<"\n constructer with 2 argument";
        a=i;
        b=j;
    }
    test(char k,double l)
    {
        cout<<"\n constructer with 2 aregument";
        c=k;
        d=l;
    }
    void show()
    {
        cout<<"\n a="<<a;
        cout<<"\n b="<<b;
        cout<<"\n c="<<c;
        cout<<"\n d="<<d;
    }
};
int main()
{
    test t1;
    t1.show();
    test t2(4,6.6f);
    t2.show();
    test t3(50,1.4f,'s',3.54);
    t3.show();
    test t4('s',32.3);
    t4.show();
    return 0;

}
