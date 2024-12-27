#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    char op;
    cin >> num1 >> num2;
    cout << "Enter the operator";
    cin >> op;
    switch (op)
    {
    case '+':
        cout << num1 + num2 << endl;
        break;
    case '-':
        cout << num1 - num2;
        break;
    case '*':
        cout << num1 * num2;
        break;
    case '%':
        cout << num1 % num2;
        break;
    case '/':
        cout <<float( num1 / num2);
        break;
    default:
        cout << "I am still Learning";
    }

    return 0;
}