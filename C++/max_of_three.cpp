#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num3;
    cin>>num1; //Input NUmber 1
    cin>>num2; //Input Number 2
    cin>>num3; //Input Number 3
    if(num1<num2)
    {
        if(num2>num3)
        cout<<"Max is "<<num2;
        else
        cout<<"Max is "<<num3;
    }
    else{
        if(num1>num3)
        cout<<"Max is "<<num1;
        else
        cout<<"Max is "<<num3;
    }
    return 0;
}