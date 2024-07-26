#include <iostream>
#include <algorithm>
using namespace std;
// brute

int brute(int *arr, int n)
{
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k < j; k++)
                sum += arr[j];
            maxSum = max(maxSum, sum);
        }
    }
    return maxSum;
}
int better(int *arr, int n)
{
    int maxSum = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            maxSum = max(maxSum, sum);
        }
    }
    return maxSum;
}
// kadane's al(gorithm
int optimalSum(int *arr, int n)
{
    int maxSum = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];

        if (sum > maxSum)
            maxSum = sum;
        if (sum < 0)
            sum = 0;
    }
    return maxSum;
}
// returning array with maximum sum:
void array(int *arr, int n)
{
    int start = 0, end = 0;
    int sum = 0;
    int maxSum = INT_MIN;
    int tempStart = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];

        if (sum > maxSum)
        {
            maxSum = sum;
            start = tempStart;
            end = i;
        }

        if (sum < 0)
        {
            sum = 0;
            tempStart = i + 1;
        }
    }

    cout << "The subarray with the maximum sum is: [";
    for (int i = start; i <= end; i++)
    {
        cout << arr[i];
        if (i != end)
            cout << " ";
    }
    cout << "] with sum " << maxSum << endl;
}
int main()
{
    int n;
    cout << "enter array size";
    cin >> n;
    int *arr = new int[n];
    cout << "enter array elements";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    array(arr, n);
    // cout << " " << optimalSum(arr, n);
    delete[] arr;
    return 0;
}