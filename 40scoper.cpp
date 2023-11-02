#include<iostream>
using namespace std;
class A
{
   public:
 int b,h,m;
 void area()
 {
    cout<<"Enter the no of b,h:"<<endl;
    cin>>b>>h;
    m=0.5*(b*h);
 }
};
class B:public A 
{
   public:
   int l,area1;
   void area()
   {
      cout<<"Enter the no of l:"<<endl;
      cin>>l;
      area1=m*l;
   }
};
class C : public B 
{
   public:
   void area()
   {
      cout<<"\n Area of A:"<<m;
      cout<<"\n Area of B:"<<area1;
   }
};
int main()
{
   C obj;
   obj.A::area();
   obj.B::area();
   obj.C::area();
   return 0;
}
