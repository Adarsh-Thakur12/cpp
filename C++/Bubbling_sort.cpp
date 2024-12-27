#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the Size of Array";
    cin >> num;
    int arr[num];
    for (int i = 0; i <= num - 1; i++)
    {
        cin >> arr[i];
    }
    int counter = 1;
    while (counter < num)
    {
        for (int i = 0; i < num - counter; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        counter++;
    }
    for (int i = 0; i <= num - 1; i++)
    {
        cout << arr[i] << " ";
    }
}