#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin;
    char c;
    fin.open("myfile.txt",ios::in);
    if(!fin)
    {
        cout<<"file is failed:";
    }
    else
    {
        cout<<"file is creat:";
        fin.close();
    }
}
