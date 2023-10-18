#include<iostream>
using namespace std;
class test {
    int a;
    float b;
    char c;
    double d;
    public:
    test(int i,float j,char k='S',double l=23.43)
    {
      cout<<"\n constructer with 4 Argument:";
      a=i;
      b=j;
      c=k;
      d=l;  
    }
    void show()
    {
        cout<<"\n a="<<a;
        cout<<"\n b="<<b;
        cout<<"\n c="<<c;
        cout<<"\n d="<<d;
    }
};
int main()
{
    test t1(45,45.34f);
    t1.show();
    return 0;
}
