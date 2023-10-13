#include<iostream>
using namespace std;
class Animal
{
    string a;
    public:
    void get()
    {
        cout<<"\nEnter the string=";
        cin>>a;
    }
    void eat()
    {
       cout<<"\nIt can be eat";
    } 
    void sleep()
    {
        cout<<"\n It can be sleep";
    }
    void bark();
};
void Animal :: bark()
{
    cout<<"\n it can be Barking";
}
int main()
{
    Animal obj;
    obj.get();
    obj.eat();
    obj.sleep();
    obj.bark();
    return 0;
}
