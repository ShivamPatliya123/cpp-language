#include<iostream>
using namespace std;
class complex
{
    public:
    int a,b;
    public:
    void setdata(int x,int y)
    {
        a=x;
        b=y;
    }
    void showdata()
    {
        cout<<"\n a="<<a<<"b="<<b;
    }
    friend ostream& operator<<(ostream&,complex);
    friend istream& operator>>(istream&,complex&);
};
ostream& operator<<(ostream &dout,complex C)
{
    cout<<"\n a="<<C.a<<"\n"<<"b="<<C.b;
    return(dout);
}
istream& operator>>(istream &din,complex &C)
{
    cin>>C.a>>C.b;
    return(din);
}
int main()
{
    complex c1;
    cout<<"Enter a complex number:";
    cin>>c1;
    cout<<" your return:";
    cout<<c1;
    return 0;
}
