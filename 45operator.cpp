#include<iostream>
using namespace std;
class count
{
    int x,y;
    public:
    void data(int a,int b)
    {
        x=a;
        y=b;
    }
    void showdata()
    {
        cout<<"x="<< x<<endl;
        cout<<"y=" << y;
    }
    count operator*(count c)
    {
        count temp;
        temp.x=x*c.x;
        temp.y=y*c.y;
        return(temp);
    }
};
int main()
{
    count c1,c2,c3;
    c1.data(3,4);
    c2.data(5,6);
    c3=c1*c2;
    c3.showdata();
    return 0;
}
