#include<iostream>
using namespace std;
class deposit
{
    long int amount;
    int year;
    float rate;
    float value;
    public:
    deposit(){}
    deposit(long int p,int y,float r=0.12);
    deposit(long int p,int y,int r);
    void display();
};
deposit::deposit(long int p,int y,float r)
{
    amount=p;
    year=y;
    rate=r;
    value=p;
    for(int i=1;i<=y;i++)
      value=value*(1.0+r);
}
deposit::deposit(long int p,int y,int r)
{
    amount=p;
    year=y;
    rate=r;
    value = p;
    for(int i=1; i<=y;i++)
     value=value*(1.0+float(r)/100);
}
void deposit::display()
{
    cout<<"principal amount=\n"<<amount<<"\nreturn value"<<value;
}
int main()
{
    deposit d1,d2,d3;
    long int p;
    int y;
    float r;
    int R;
    cout<<"Enter amount,period,interest rate(in percent)\n";
    cin>>p>>y>>R;
    d1=deposit(p,y,R);
    cout<<"Enter amount,period,interest rate(decimal form)\n";
    cin>>p>>y>>r;
    d2=deposit(p,y,r);
    cout<<"Enter amount,period\n";
    cin>>p>>y;
    d3=deposit(p,y);
    cout<<"\n deposite1=";
    d1.display();
    cout<<"\n deposite2=";
    d2.display();
    cout<<"\n deposite3=";
    d3.display();
    return 0;
}
