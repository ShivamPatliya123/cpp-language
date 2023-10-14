#include<iostream>
using namespace std;
class test
{
    int a;
    float b,c;
    public:
    test(int i,float j)
    {
        a=i;
        b=j;
    }
    void output()
    {
        c=a-b;
        cout<<"Subtraction is:"<<c;
    }
};
int main()
{
    test t(10,7.8);
   
    t.output();
    return 0;

}
