#include<iostream>
using namespace std;
class simple
{
    int p,r,t,s;
    public:
    void input()
    {
        cout<<"\nEnter the no p,r,t=:";
        cin>>p>>r>>t;
    }
    void solve()
    {
        s=(p*r*t)/100;
    }
    void output();
};
 void simple::output()
  {
        cout<<"Simple intrest is ="<<s;
  }
int main()
{
    simple s1;
    s1.input();
    s1.solve();
    s1.output();
    return 0;
}
