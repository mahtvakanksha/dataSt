// striver's third video questions on array
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
int missingNumBetter(int *arr, int n)
{
    // linear search here-O(NlogN)
    sort(arr, arr + n);
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] != i)
            break;
    }
    return i;
}
int missingNumBrute(int *arr, int n)
{
    // O(n^2)
    bool found;
    for (int i = 0; i <= n; i++)
    {
        found = false;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == i)
            {
                found = true;
                // break;
            }
        }
        if (!found && i != n)
            return i;
    }
    return -1;
}
int missingNumBetter2(int *arr, int n)
{
    // using hash-map:O(2N) and SC-->O(N)
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[arr[i]] = 1;
    }
    for (int i = 1; i < n + 1; i++)
    {
        if (m[i] == 0)
        {
            return i;
        }
    }
    return -1;
}
int optimizedApproach(int *arr, int n)
{
    int sum = 0;
    int sumN = (n * (n + 1)) / 2;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return (sumN - sum);
}
int optimizedApproach2(int *arr, int n)
{
    int exor = 0, exorr = 0;
    for (int i = 0; i <= n; i++)
    {
        if (i < n)
            exorr = exorr ^ arr[i];
        exor = exor ^ i;
    }
    int res = exor ^ exorr;
    return res;
}
int maxConsecutiveOnesBrute(int *arr, int n)
{
    int count;
    int maxi = 0;
    int j;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            count = 1;
            for (j = i + 1; j < n; j++)
            {
                if (j < n && arr[j] == 1)
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
            maxi = max(count, maxi);
        }
    }
    return maxi;
}
int maxConsecutiveOnesBetter(int *arr, int n)
{
    //    O(N) approach:
    int count = 0, maxi = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
            count++;
        else
            count = 0;
        maxi = max(count, maxi);
    }
    return maxi;
}
int main()
{
    int n;
    cout << "enter largest num ";
    cin >> n;
    // since n is largest value, we need array of n-1 size because 1 element is missing
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // int missingVal = optimizedApproach2(arr, n);
    // cout << "missing num is: " << missingVal;

    cout << "max consecutive ones are " << maxConsecutiveOnesBetter(arr, n);
    return 0;
}