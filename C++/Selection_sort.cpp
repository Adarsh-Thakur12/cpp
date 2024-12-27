#include <iostream>
using namespace std;
void Selection_sort(int arr[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}
void print(int arr[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int num;
    cout << "Enter Size of Array:";
    cin >> num;
    int arr[num];
    for (int i = 0; i <= num - 1; i++)
    {
        cin >> arr[i];
    }
    Selection_sort(arr, num);
    print(arr, num);
}