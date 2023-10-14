#include<iostream>
using namespace std;
class simple
{
    int a,b,c;
    public:
    simple()
    {
        cout<<"Enter the no a"<<endl;
        cin>>a;
        cout<<"Enter the no b"<<endl;
        cin>>b;
    }
    void output()
    {
        c=a+b;
        cout<<"Addition is="<<c;
    }
};
int main()
{
    simple s;
    //s.show();
    s.output();
    return 0;
}
