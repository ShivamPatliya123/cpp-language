#include<iostream>
using namespace std;
class complex
{
    public:
    int a,b;
    ~complex()
    {
        cout<<"enter the no a and b:";
        cin>>a>>b;
        int c=a+b;
        cout<<c;
    }
};
void output()
    {
        complex obj;
    }
int main()
{
    output();
    return 0;
}
