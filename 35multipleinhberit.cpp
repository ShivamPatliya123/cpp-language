#include<iostream>
using namespace std;
class student
{
    public:
    string name;
    string classname;
    void getstu()
    {
        cout<<"\nEnter the Name:";
        cin>>name;
        cout<<"\nEnter the class:";
        cin>>classname;
    }
};
class exam
{
    public:
    int rollno;
    float egsm1,hndm2,mathsm3,phym4,chm5;
    void getexam()
    {
        cout<<"\nEnter the Rollno:";
        cin>>rollno;
        cout<<"\nEnter the all subject marks:";
        cin>>egsm1>>hndm2>>mathsm3>>phym4>>chm5;
    }
};
class result : public student,public exam
{
    public:
    int t;
    void total()
    {
        getstu();
        getexam();
        t=egsm1+hndm2+mathsm3+phym4+chm5;
        cout<<"\n Total Marks:"<<t;
    }
    void percent()
    {
        int p = t/5;
        if(p>=33)
        {
            cout<<"\nPass:";
        }
        else
        {
            cout<<"\nFail:";
        }
        cout<<"\nPercentage:"<<p;
    }
};
int main()
{
    result r;
    r.total();
    r.percent();
    return 0;
}
