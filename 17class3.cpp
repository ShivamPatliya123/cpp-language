#include<iostream>
using namespace std;
class simple
{
    int p;
    public:
    void grade()
    {
        cout<<"Enter the no:";
        cin>>p;
    }
    void rule()
    {
        if(p<=40)
        {
            cout<<"\n Grade C";
        }
        else if(p<=50)
        {
            cout<<"\n Grade B";
        }
        else if(p<=65)
        {
            cout<<"Grade B+";
        }
        else if(p<=75)
        {
            cout<<"\nGrade A";
        }
        else
        {
            cout<<"\nGrade A+";
        }
    } 
};
int main()
{
    simple obj;
    obj.grade();
    obj.rule();
    return 0;
}
