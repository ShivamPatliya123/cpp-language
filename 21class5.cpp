#include<iostream>
using namespace std;
class student
{
    public:
    void setinfo(string name,int age,string address,string grade)
    {
        name = name;
        age = age;
        address = address;
        grade = grade;

    }
    void displaybiodata()
    {
        cout<<"student bio data:"<<endl;
        cout<<"Name :"<<endl;
        cout<<"Address :"<<endl;
        cout<<"grade :"<<endl;
    }
    private:
     string name;
     int age;
     string address;
     string grade;

};
int main()
{
    student student1;
    student1.setinfo("john Doe",18,"123 main st,city","A");
    student1.displaybiodata();
    return 0;
}
