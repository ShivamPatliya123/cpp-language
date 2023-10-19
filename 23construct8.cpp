#include<iostream>
using namespace std;
class Example
{
    public:
    int a;
    Example(int x)
    {
        a=x;
    }
    Example(Example &ob)
    {
        a=ob.a;
    }
};
int main()
{
    Example e1(36);
    Example e2(e1);
    cout<<"e1 ="<<e1.a<<endl;
    cout<<"e2 ="<<e2.a<<endl;
    return 0;
}
