#include<iostream>
using namespace std;
class shape
{
    public:
    int area (int r)
    {
        return (3.14*r*r);
    }
    double area(double b,double h)
    {
        return(0.5*b*h);
    }
    void area(int l,int bd)
    {
        int a=l*bd;
        cout<<"\nArea Rectangle:"<<a;
    }
};
int main()
{
    shape s;
    cout<<"\n Area triangle="<<s.area(10.5,13.4);
    cout<<"\n Area of circle=:"<<s.area(10);
    s.area(10,20);
    return 0;
}
