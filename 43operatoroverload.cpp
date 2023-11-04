#include<iostream>
using namespace std;
class count
{
    private:
    int value;
    public:
    count():value(5){}
    void operator++()
    {
        ++value;
    }
    void display()
    {
        cout<<"count:"<<value<<endl;
    }
};
int main()
{
    count obj1;
    ++ obj1;
    obj1.display();
    return 0;
}
