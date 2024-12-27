/*Create a user class with properties :id(private),username(public) 
, password(private).
its id shiould be initialized in a parameterised constructor.
It should have a getter setter for password.*/
#include<iostream>
#include<string.h>
using namespace std;
class user
{
private:
    int id;
    string password;
public:
    string username;
    user(int id)
    {
        this->id=id;
    }
    string getpassword()
    {
        return password;
    }
    void setpassword(string password)
    {
        this->password=password;
    }

};

int main()
{
    user user1(101);
    user1.username="Adarsh Thakur";
    user1.setpassword("abcd@123"); 
    cout<<"Username :"<<user1.username<<endl;
    cout<<"Password : "<<user1.getpassword();
    //cout<<"id : "<<user1.id();
}
