#include<iostream>
#include<string.h>
using namespace std;
class Teacher{
    public:
    string name;
    int id;
};
class Student{
    public:
    string section;
    int roll;
};
class TA : public Student,public Teacher{
    public:
    int num;
};

int main()
{
    TA t1;
    t1.name="Adarsh";
    t1.id=432;
    t1.roll=5;
    cout<<t1.name<<endl;
    cout<<t1.id<<endl;
    cout<<t1.roll<<endl;
}