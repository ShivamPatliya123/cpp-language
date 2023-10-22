#include<iostream>
using namespace std;
class room
{
  private:
  double length,breadth,height;
  public: 
  void input(double len,double brth,double hgt)
  {
    length=len;
    breadth=brth;
    height=hgt;
  } 
  double claculateArea()
  {
    return length*breadth;
  }
  double claculateVolume()
  {
    return length*height*breadth;
  }
};
int main()
{
    room r;
    r.input(23.4,43.4,56.6);
    cout<<"Room claculateArea:"<<r.claculateArea()<<endl;    
    cout<<"Room claculateArea:"<<r.claculateVolume()<<endl;    
    return 0;
}
