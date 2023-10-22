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
  double calculateArea()
  {
    return length*breadth;
  }
  double calculateVolume()
  {
    return length*height*breadth;
  }
};
int main()
{
    room r;
    r.input(23.4,43.4,56.6);
    cout<<"Room calculateArea:"<<r.calculateArea()<<endl;    
    cout<<"Room calculateArea:"<<r.calculateVolume()<<endl;    
    return 0;
}
