#include<iostream>
using namespace std;
class employee
{
    string name;
    int idno;
    float salary;
    int age;
    public:
    employee()
    {
       cout<<"\nFirst employee:";
    }
    employee(string a,int b,float c,int d)
    {
        cout<<"\n second employee:";
        name=a;
        idno=b;
        salary=c;
        age=d;
    }
    employee(int d,float c,int b,string a)
    {
        cout<<"\n Third employee:";
        name=a;
        idno=b;
        salary=c;
        age=d;
    }
    employee(int b,int d,string a,float c)
    {
        cout<<"\n Four employee:";
        name=a;
        idno=b;
        salary=c;
        age=d;
    }
    void showdata()
    {
        cout<<"\n Name="<<name;
        cout<<"\n Idno="<<idno;
        cout<<"\n Salary="<<salary;
        cout<<"\n Age="<<age;
    }
};
int main()
{
    employee obj;
    obj.showdata();
     employee obj1("Shivam",1,50.5f,19);
     obj1.showdata();
    employee obj2(20,58.4f,2,"Ram");
    obj2.showdata();
    employee obj3(3,21,"Mohan",57.5f);
    obj3.showdata();
    return 0;
}
