#include<iostream>
#include <math.h>
using namespace std;
class solution
{
    public:
    int num(int n)
    {
        int ans;
        for(int i=0;i<=30;i++)
        {
            ans=pow(2,i);
            if(ans==n)
            {
                cout<<" true";
            }
        }
        return (false);
    }
};
int main()
{
    solution obj;
    obj.num(17);
    return 0;
}
