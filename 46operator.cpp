#include<iostream>
using namespace std;
class simple
{
    float x,y;
    public:
    void data(float a,float b)
    {
        x=a;
        y=b;
    }
    void display()
   {
       cout<<"x="<<x<<endl;
       cout<<"y="<<y;
   }
    simple operator-(simple v)
{
    simple t;
    t.x=x+v.x;//drawback of cpp in operator overloading
    t.y=y-v.y;
    return(t);
}
};
int main()
{
    simple s,s1,s2;
    s.data(56.76,64.965);
    s1.data(6.57,64.7);
    s2=s-s1;
    s2.display();
    return 0;
}
