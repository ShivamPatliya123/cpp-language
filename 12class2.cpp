#include<iostream>
using namespace std;
class table
{
    int a,i,s;
    public:
    void num()
    {
        cout<<"\nEnter the no:=";
        cin>>a;
    }
    void solve()
    {
        for(i=1;i<=10;i++)
        {
            s=a*i;
            cout<<s<<endl;
        }
       
    }
    
};
int main()
{
    table t;
    t.num();
    t.solve();
    return 0;
}
