#include <iostream>
#include <utility>
#include <unordered_map>
#include <algorithm>
using namespace std;
pair<int, int> twoSum(int *arr, int n, int k)
{
    // this is brute force approach-->mine:O(N^2) and SC-->O(1)
    // this code will just return first pair only with sum==k, not all
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == k)
                return {i, j};
        }
    }
}
pair<int, int> twoSumBetter(int *arr, int n, int k)
{
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        int diff = k - arr[i];
        if (m.find(diff) != m.end())
        {
            return {m[diff], i};
        }
        m[arr[i]] = i;
    }
}
pair<int, int> twoSumOptimal(int *arr, int n, int k)
{
    int i = 0, j = n - 1;
    sort(arr, arr + n);
    while (i < j)
    {
        int sum = arr[i] + arr[j];
        if (sum == k)
        {
            return {arr[i], arr[j]};
        }
        else if (sum > k)
        {
            j--;
        }
        else
            i++;
    }
    return {-1, -1};
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
    pair<int, int> p;
    int sum;
    cout << "enter the sum";
    cin >> sum;
    p = twoSumOptimal(arr, n, sum);
    // twoSumBetter(arr, n, sum);
    // twoSum(arr, n, sum);
    cout << p.first << " and " << p.second;
    return 0;
}