#include<iostream>
using namespace std;
class person
{
    public:
    string name;
public:
    person(const string & name):name(name)
    {
    }
        void display()
        {
            cout<<"\nEnter the Name:"<<name;
        }
};
class Employee : public person
{
    public:
    int employeeid;
public:
    Employee(const string&name,int id):person(name),employeeid(id)
    {
    }
    void displayemp()
    {
        display();
        cout<<"\nEmployee Id:"<<employeeid;
        cout<<"\nFunction inside derived class employee";
    }
};
class student:public person
{
    public:
    int studentid;
public:
    student(const string & name, int id):person(name),studentid(id)
    {
    }
    void displaystd()
    {
      display();
      cout<<"\n Student id:"<<studentid;
      cout<<"\n function inside derived class student:";
    }
};
class studentintern:public Employee,public student
{
    public:
    studentintern(const string & name,int empid,int stdid):Employee(name,empid),student(name,stdid)
    {
    }
    void displaystudentintern()
    {
        cout<<"Functiion inside derived class studentinternship:"<<endl;
        displayemp();
        displaystd();
    }
};
int main()
{
    studentintern si("shivam",68423,3229);
    si.displaystudentintern();
    return 0;
}
