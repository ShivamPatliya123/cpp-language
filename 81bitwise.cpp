#include<iostream>
using namespace std;
class solution
{
    public:
int bitwise(int n)
{
    int m=n;
    int mask=0;
    if(n==0)
    return 1;
    while(m!=0)
    {
        mask=(mask<<1)|1;
        m=m>>1;
    }
    int ans=(~n)&mask;
    cout<<"answer="<<ans;
}
};
int main()
{
    solution obj;
    obj.bitwise(8);
    return 0;
}
