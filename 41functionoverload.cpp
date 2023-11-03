#include<iostream>
using namespace std;
int main()
{
  int sub(int,int);
  void sub(int,int,int);
  double sub(double,double);
  void sub(int,float);

  sub(43,432,534);
  cout<<"\n3subtraction:"<<sub(54,23);
  cout<<"\n4subtraction:"<<sub(53.45,43.57);
  sub(43,12.3f);
  return 0;
}
int sub(int a,int b)
{
    return (a-b);
}
void sub(int a,int b,int c)
{
    int d=a-b-c;
    cout<<"\n1subtraction of 3 int:"<<d;
}
double sub(double a,double b)
{
    return(a-b);
}
void sub(int a,float b)
{
    float d=a-b;
    cout<<"\n2subtraction one integer and one float:"<<d;
}
