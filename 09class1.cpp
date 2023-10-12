#include<iostream>
using namespace std;
class student
{
    public:
    int rollno;
    string name;
    float per;

     void std()
     {
        cout<<"\nEnter the no:";
        cin>>rollno;
        cout<<"\nEnter the name:";
        cin>>name;
        cout<<"\nEnter the percentage:";
        cin>>per;
     }
     void output()
     {
        cout<<"\nRollno is="<<rollno;
        cout<<"\n Name is="<<name;
        cout<<"\n Percentage="<<per;
     }
};
int main()
{
    student obj;
    obj.std();
    obj.output();
    return 0;
}
