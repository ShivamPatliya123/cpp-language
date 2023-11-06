#include<iostream>
using namespace std;
class complex
{
    int real,imag;
    public:
    void data(int r,int i)
    {
       real=r;
       imag=i;
    }

    complex operator/(complex obj)
    {
        complex temp;
        temp.real=real/obj.real;
        temp.imag=imag%obj.imag;
        return (temp);
    }
    void display()
    {
        cout<<real << " + i" <<imag;
    }
};
int main()
{
    complex obj1,obj2,obj3;
    obj1.data(84,24);
    obj2.data(42,12);
    obj3=obj1/obj2;
    obj3.display();
    return 0;
}
