#include<iostream>
using namespace std;
class student
{
    string name;
    int rollno;
    int English,Maths,Hindi,Science,Social;
    float marks;
    public:
    void input()
    {
        cout<<"\nEnter the name:";
        cin>>name;
        cout<<"\nEnter the roll no:";
        cin>>rollno;
        cout<<"\nEnter English no:";
        cin>>English;
        if(English<33)
        {
            cout<<"Fail";
        }
        cout<<"\nEnter Maths no:";
        cin>>Maths;
        if(Maths<33)
        {
            cout<<"Fail";
        }
        cout<<"\nEnter Hindi no:";
        cin>>Hindi;
        if(Hindi<33)
        {
            cout<<"Fail";
        }
        cout<<"\nEnter Science no:";
        cin>>Science;
        if(Science<33)
        {
            cout<<"Fail";
        }
        cout<<"\nEnter Social no:";
        cin>>Social;
        if(Social<33)
        {
            cout<<"Fail";
        }
    }
    void output()
    {
        marks=(English+Maths+Hindi+Science+Social)/5;
        cout<<"\nTotal Marks:"<<marks;
    
    if(marks>33)
    {
    
        cout<<"\nPass";
    }
     else
     {
        cout<<"\nFail";
     }
    }
};
int main()
{
    student s;
    s.input();
    s.output();
    return 0;
}
