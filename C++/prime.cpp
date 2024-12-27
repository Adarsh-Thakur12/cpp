#include <iostream>
using namespace std;
int main()
// {
//     int num;
//     int i;
//     int counter = 0;
//     cin >> num;
//     for (i = 2; i < num; i++)
//     {
//         if (num % i == 0)
//         {
//             counter++;
//             cout << i << "\n";
//         }
//     }
//     if (counter == 0)
//     {
//         cout << "Number is Prime";
//     }
//     else
//     {
//         cout << "Number is Not Prime";
//     }
// }
                         //******************//
                            // Two methods
{   
    int num, i;
    cin >> num;
    for (i = 2; i <= num; i++)
    {
        if (num % i == 0)
        {
            break;
        }
    }
    if (i == num)
    {
        cout << "Number is Prime";
    }
    else
        cout << "Number is Not Prime";
    return 0;
}