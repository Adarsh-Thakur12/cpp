#include <iostream>
using namespace std;
void maxprofit(int *price, int n)
{
    int buy[10000];
    buy[0] = INT8_MAX;
    for (int i = 1; i < n; i++)
    {
        buy[i] = min(buy[i - 1], price[i]);
    }
    int current_price;
    int best_price = 0;
    for (int i = 0; i < n; i++)
    {

        current_price = price[i] - buy[i];
        best_price = max(best_price, current_price);
    }
    cout << "Maximum profit will be " << best_price;
}
int main()
{
    int price[] = {4,3,2,1};
    int n = sizeof(price) / sizeof(int);
    maxprofit(price, n);
    return 0;
}