#include<iostream>
using namespace std;
class Elephant
{
    public:
    void display()
    {
        cout<<"Elephant class"<<endl;
    }
};
class horse
{
    public:
    void display2()
    {
        cout<<"horse class"<<endl;
    }
};
class animal:public Elephant,public horse{
    public:
    void display3()
    {
        cout<<"animal class"<<endl;
    }
};
int main()
{
    animal obj;
    obj.display();
    obj.display2();
    obj.display3();
    return 0;
}
