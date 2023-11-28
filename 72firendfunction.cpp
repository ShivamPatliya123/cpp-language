#include<iostream>
using namespace std;
class test
{
    public:
    string name;
    int age;
    void setdata(string n,int a)
    {
        name=n;
        age=a;
    }
    void showdata()
    {
        cout<<"\n name="<<name<<"\n"<<"Age="<<age;
    }
    friend ostream& operator<<(ostream&,test);
    friend istream& operator>>(istream&,test&);
};
ostream& operator<<(ostream &dout,test T)
{
    cout<<"\n name="<<T.name<<"\n Age="<<T.age;
    return(dout);
}
istream& operator>>(istream &din,test &T)
{
    cin>>T.name>>T.age;
    return(din);
}
int main()
{
    test t;
    cout<<"Enetr the name:";
    cin>>t;
    cout<<"your return:";
    cout<<t;
    return 0;
}
