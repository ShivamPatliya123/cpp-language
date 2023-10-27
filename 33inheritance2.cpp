#include<iostream>
using namespace std;
class person
{
    public:
    string name;
    int id;
    void input()
    {
        cout<<"\nEnter the name:";
        cin>>name;
        cout<<"\nEnter the id:";
        cin>>id;
    }
};
class student : public person
{
    public:
    string branch;
    int fees;
    
    void input1()
    {
        cout<<"\nEnter the branch:";
        cin>>branch;
        cout<<"\nEnter the fees:";
        cin>>fees;
    }
    void output()
    {
        cout<<"\nName:"<<name;
        cout<<"\nId:"<<id;
        cout<<"\nBranch:"<<branch;
        cout<<"\nFees:"<<fees;
    }
};
int main()
{
    student obj;
    obj.input();
    obj.input1();
    obj.output();
    return 0;
}
