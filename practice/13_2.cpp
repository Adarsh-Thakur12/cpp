#include <iostream>
#include <string>
using namespace std;
class student
{
    string name;
    int roll;

public:
    void setname(string nam)
    {
        name = nam;
    }
    void setroll(int rol)
    {
        roll = rol;
    }
    string getname()
    {
        return name;
    }
    int getroll()
    {
        return roll;
    }
};
int main()
{
    student s1;
    s1.setname("Adarsh");
    s1.setroll(10);
    cout << s1.getname() << endl;
    cout << s1.getroll() << endl;
}