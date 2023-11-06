#include<iostream>
using namespace std;
class A 
{
 public:
 string a;
 public:
 void  virtual getdata()
 {
    cout<<"\n from Base class A:";
    cout<<"\nEnter the no.";
    cin>>a;
    cout<<"Name:"<<a;
    
 }
};
class B:public A{
    public:
    string b;
    public:
    void virtual getdata()
    {
        cout<<"\n from derive class:";
        cout<<"\n Enter the no.";
        cin>>b;
    
    cout<<"surname:"<<b;
    }
};
int main()
{
    A *p;
    A obj1;
    p = &obj1;
    p->getdata();
    B obj;
    p = &obj;
    p->getdata();
    return 0;
}
