#include<iostream>
using namespace std;
class Car
{
    public:
    string brand;
    string modal;
    int year;
     Car(string x,string y,int z)
     {
        brand = x;
        modal = y;
        year = z;
     }
};
int main()
{
    Car obj1("BMW","X5",1999);
    Car obj2("Ford","Mustange",2003);
    cout<<obj1.brand<<" "<<obj1.modal<<" "<<obj1.year<<"\n";
    cout<<obj2.brand<<" "<<obj2.modal<<" "<<obj2.year<<"\n";
}
