#include<iostream>
using namespace std;
class student
{
    public:
    string Name;
    int Age;
    void input()
    {
        cout<<"enter the name:"<<endl;
        cin>>Name;
        cout<<"Enter the Age:"<<endl;
        cin>>Age;
    }
};
class Branch
{
    public:
    int id,rollno;
    void input2()
    {
        cout<<"Enter the id:"<<endl;
        cin>>id;
        cout<<"Enter the rollno:"<<endl;
        cin>>rollno;
    }
};
class Biodata:public student,public Branch
{
public:
void input3()
{
 cout<<"Name:"<<Name<<endl;
 cout<<"Age:"<<Age<<endl;
 cout<<"id:"<<id<<endl;
 cout<<"rollno:"<<rollno<<endl;
}
};
int main()
{
    Biodata obj;
    obj.input();
    obj.input2();
    obj.input3();
    return 0;
}
