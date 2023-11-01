#include<iostream>
using namespace std;
class stu
{
    int id;
    char name[20];
    public:
    void getstu()
    {
        cout<<"\nEnter stuid name";
        cin>>id>>name;
    }
};
class marks:public stu
{
    protected:
    int  m,p,c,e,h;
    public:
    void getmarks()
    {
        cout<<"\nEnter the subject marks:";
        cin>>m>>p>>c>>e>>h;
    }
};
class sports
{
    protected:
    int spmarks;
    public:
    void getsports()
    {
        cout<<"Enter the sport marks:";
        cin>>spmarks;
    }
};
class result:public marks,public sports
{
    int total;
    float avg;
    public:
    void show()
    {
        total=m+p+c+e+h;
        avg = total/5;
        cout<<"Total="<<total<<endl;
        cout<<"Average="<<avg<<endl;
        cout<<"Average+sportmarks:"<<avg+spmarks;
    }
};
int main()
{
    result r;
    r.getstu();
    r.getmarks();
    r.getsports();
    r.show();
    return 0;
}
