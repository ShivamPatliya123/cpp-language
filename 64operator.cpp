#include<iostream>
using namespace std;
class simple
{
    private:
    int a,b;
    public:
    void setdata()
    {
        cout<<"Enter the no a and b:\n";
        cin>>a>>b;
    }
   /* void setdata()
    {
        cout<<"Enter the no a and b:\n";
        cin>>a>>b;
    }*/
    void showdata()
    {
       cout<<"a="<<a<<"\n"<<"b="<<b;
    }
    simple add(simple c)
    {
        simple temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return(temp);
    }
};
int main()
{
    simple obj1,obj2,obj3;
    obj1.setdata();
    obj2.setdata();
    obj3=obj1.add(obj2);
    obj3.showdata();
    return 0;
}
