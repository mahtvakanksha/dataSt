#include <iostream>
#include <algorithm>
using namespace std;
int maxProfitBrute(int *arr, int n)
{
    int profit = 0;
    for (int i = 1; i < n; i++)
    {
        int min = arr[i - 1];
        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[j] < arr[i])
                min = arr[j];
        }
        int diff = arr[i] - min;
        if (diff > 0)
            profit = max(profit, diff);
        else
            continue;
    }
    return profit;
}
int maxProfitBetter(int *arr, int n)
{
    int mini = arr[0];
    int profit = 0;
    for (int i = 1; i < n; i++)
    {
        int diff = arr[i] - mini;
        profit = max(profit, diff);
        mini = min(mini, arr[i]);
    }
    return profit;
}
int main()
{
    int n;
    cout << "enter the size of array";
    cin >> n;
    int *arr = new int[n];
    cout << "enter array elements";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << " " << maxProfitBetter(arr, n);
    return 0;
}