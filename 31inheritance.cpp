#include<iostream>
using namespace std;
class base
{
    public:
    int a,b;
    void input()
    {
      cout<<"Enter the no a and b:";
      cin>>a>>b;
    }
};
class derive:public base
{
    public:
    int c;
    void input1()
    {
        cout<<"Enter the no c:";
        cin>>c;
    }
    void cal()
    {
        int d=a-b-c;
        cout<<"subtract:="<<d;
    }
};
int main()
{
    derive obj;
    obj.input();
    obj.input1();
    obj.cal();
    return 0;
}
