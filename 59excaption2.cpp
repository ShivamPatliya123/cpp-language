#include<iostream>
using namespace std;
int main()
{
    try
    {
        int age=12;
        if(age>=18)
        {
            cout<<"Access granted - you are old enough:";
        }
        else
        {
            throw(age);
        }
    }
    catch(int mynum)
    {
        cout<<"you must be 18 year \n ";
        cout<<"Age is:"<<mynum;
    }
    return 0;
}
