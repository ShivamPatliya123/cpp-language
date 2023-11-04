#include<iostream>
using namespace std;
class count 
{
  public:
  int  value;
  public:
  count():value(28){}
  void operator--()
  {
    value=value-5;
  }
  void display()
  {
    cout<<"count :"<<value<<endl;
  }
};
int main()
{
    count obj1;
    --obj1;
    obj1.display();
    return 0;
}
