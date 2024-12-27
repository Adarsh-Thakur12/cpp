#include<iostream>
using namespace std;
class bankaccount{
    int acount_number;
    int balance;
public:
    void deposit(int amount)
    {
        balance+=amount;
    }
    void withdraw(int amount)
    {
        balance-=amount;
    }
    void set_details(int number,int bal)
    {
        acount_number=number;
        balance=bal;
    }
    int get_number()
    {
        return acount_number;
    }
    int get_balnce()
    {
        return balance;
    }

};
int main()
{
    bankaccount a1,a2;
    a1.set_details(675739,43000);
    a1.deposit(7000);
    cout<<a1.get_balnce();
    
}