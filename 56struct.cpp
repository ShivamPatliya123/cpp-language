#include<iostream>
using namespace std;
struct book
{
    int bookid;
    char title[20];
    float price;
    void input()
    {
        cout<<"Enter bookid,title,price:";
        cin>>bookid>>title>>price;
    }
    void display()
    {
        cout<<"\n"<<bookid<<" "<<title<<" "<<price;
    }
};
int main()
{
    book b1;
    b1.input();
    b1.display();
    return 0;
}
