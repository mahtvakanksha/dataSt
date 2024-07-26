#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
int brute(int *arr, int n)
{
    int count, maxi = 0;
    for (int i = 0; i < n; i++)
    {
        count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }
        maxi = max(maxi, count);
    }
    if (maxi > n / 2)
        return maxi;
    return -1;
}
int brute1(int *arr, int n)
{
    int majCount = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }
        majCount = max(majCount, count);
        if (majCount > n / 2)
            return arr[i];
    }
    return -1;
}
int better(int *arr, int n)
{
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[arr[i]]++;
    }
    for (auto it : m)
    {
        if (it.second > n / 2)
            return it.first;
    }
    return -1;
}
// MOORE'S VOTING ALGORITHM:
int optimal(int *arr, int n)
{
    int ele, count = 0;
    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            count = 1;
            ele = arr[i];
        }
        else if (count == ele)
        {
            count++;
        }
        else
            count--;
    }
    count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == ele)
            count++;
    }
    if (count > n / 2)
        return ele;
    return -1;
}
int main()
{
    int n;
    cout << "enter size";
    cin >> n;
    int *arr = new int[n];
    cout << "enter elements";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << " " << optimal(arr, n);
    return 0;
}