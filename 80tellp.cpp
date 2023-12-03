#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("myfile.txt",ios::app);
    int pos;
    pos=fout.tellp();
    cout<<pos;
    fout<<"Indore";
    pos=fout.tellp();
    cout<<pos;
    fout.close();
    return 0;
}
