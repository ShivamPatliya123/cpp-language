#include<iostream>
using namespace std;
class employee
{
    public:
    int no;
    string name;
    int salary;
    void getemp()
    {
        cout<<"Enter the no:";
        cin>>no;
        cout<<"Enter the name:";
        cin>>name;
        cout<<"Enter the salary:";
        cin>>salary;
    }
};
class manager:public employee
{
    public:
    string deptname;
    int dofj;
    string pjtname;
    void getmgr()
    {
        cout<<"\nEnter the deptName:";
        cin>>deptname;
        cout<<"\nEnter the project name:";
        cin>>pjtname;
        cout<<"\nEnter the Date of join:";
        cin>>dofj;
    }
};
class superviser : public manager
{
    public:
    string supdept;
    int dofc;
    void getsup()
    {
        getemp();
        getmgr();
        cout<<"\nEnter the superviser department:";
        cin>>supdept;
        cout<<"\nEnter the Date of closing:";
        cin>>dofc;
    }
    void display()
    {
        cout<<"\nNumber:"<<no;
        cout<<"\nName:"<<name;
        cout<<"\nSalary:"<<salary;
        cout<<"\nDepartment Name:"<<deptname;
        cout<<"\nDate of join:"<<dofj;
        cout<<"\nproject name:"<<pjtname;
        cout<<"\nsuperviser department:"<<supdept;
        cout<<"\nDate of closing:"<<dofc;
    }
};
int main()
{
    superviser obj;
    obj.getsup();
    obj.display();
    return 0;
}
