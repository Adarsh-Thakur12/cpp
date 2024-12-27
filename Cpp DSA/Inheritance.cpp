#include<iostream>
using namespace std;
class Animal{
    public:
    string name;
    void swim()
    {
        cout<<"Can swim\n";
    }
    void dance()
    {
        cout<<"Can Dance\n";
    }
};
class Fish :public Animal{
    public:
    void fins()
    {
        cout<<"Have 3 Fins";
    }

};
int main()
{
    Fish f1;
    f1.dance();
    f1.swim();
    f1.fins();

}