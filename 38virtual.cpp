#include<iostream>
using namespace std;
class person
{
public:
string name;
int age;
void getp()
 {
    cout<<"\nEnter the name:";
    cin>>name;
    cout<<"\nEnter the age:";
    cin>>age;
    //cout<<"\nName of:"<<name;
    //cout<<"\nAge:"<<age;
 }
};
class student:virtual public person
{
    public:
    int stdid;
    string branch;
    void gets()
    {
        cout<<"\nEnter the student id:";
        cin>>stdid;
        cout<<"\nEnter the branch:";
        cin>>branch;
        //cout<<"\nstudent id:"<<stdid;
        //cout<<"\nBranch fo:"<<branch;
    }
};
class employee:virtual public person
{
    public:
    int empid;
    string department;
    void gete()
    {
        cout<<"\nEnter the employee id:";
        cin>>empid;
        cout<<"\nEnter the department:";
        cin>>department;
        //cout<<"\n employee id:"<<empid;
        //cout<<"\n Department:"<<department;

    }
};
class internship:public student,public employee
{
    public:
    string companyname;
    void getin()
    {
        cout<<"\nEnter the companyname:";
        cin>>companyname;
    }
    void display()
    {
        cout<<"\nName of:"<<name;
        cout<<"\nAge:"<<age;
        cout<<"\nstudent id:"<<stdid;
        cout<<"\nBranch fo:"<<branch;
        cout<<"\n employee id:"<<empid;
        cout<<"\n Department:"<<department;
        cout<<"companyname:"<<companyname;
    }
};
int main()
{
 internship obj;
 obj.getp();
 obj.gets();
 obj.gete();
 obj.getin();
 obj.display();
 return 0;
}
