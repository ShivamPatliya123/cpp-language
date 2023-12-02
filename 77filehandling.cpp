#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("myfile.txt",ios::out);
    fout<<"hello";
    fout.close();
    return 0;
}
