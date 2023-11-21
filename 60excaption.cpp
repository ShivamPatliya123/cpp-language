#include<iostream>
using namespace std;
int main()
{
    int x=1;
    cout<<"Before try \n";
    try{
        cout<<"inside try \n";
        if(x<0)
        {
            throw x;
            cout<<"After throw(never executed)\n";
        }
    }
    catch(int x)
    {
        cout<<"exception caught \n";
    }
    cout<<"After caught(will be executed:)\n";
    return 0;
}
