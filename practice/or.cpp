#include <iostream>
#include <string.h>
using namespace std;
int ispalindrom(char arr[], int n)
{
    int flag=0;
    char ar[30];
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i]!=arr[n-i-1])
        {
            cout<<"Not Palindrom";
            return 0;
        }
    }
    cout<<"Palindrom";
    return 0;
}
int main()
{
    char word[30];
    cin.getline(word, 30, '\n');
    ispalindrom(word, strlen(word));
}