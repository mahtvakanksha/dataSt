#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void permute(vector<int> &arr, vector<vector<int>> &ans, int start, int end)
{
    if (start == end)
        ans.push_back(arr);
    else
    {
        for (int i = start; i <= end; i++)
        {
            swap(arr[i], arr[start]);
            permute(arr, ans, start + 1, end);
            swap(arr[i], arr[start]);
        }
    }
}
void brute(vector<int> arr, int n)
{
    vector<vector<int>> ans;
    permute(arr, ans, 0, n - 1);
    for (const auto &perm : ans)
    {
        for (int num : perm)
        {
            cout << num << " ";
        }
        cout << endl;
    }
}
void better(vector<int> v, int n)
{
    next_permutation(v.begin(), v.end());
    for (auto it : v)
        cout << it;
}
void optimal(vector<int> v, int n)
{
    int index = -1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (v[i] < v[i + 1])
        {
            index = i;
            break;
        }
    }
    if (index == -1)
        reverse(v.begin(), v.end());
    else
    {
        for (int i = n - 1; i > index; i--)
        {
            if (v[i] > v[index])
            {
                swap(v[i], v[index]);
                break;
            }
        }
        reverse((v.begin() + index + 1), v.end());
    }
    for (auto it : v)
    {
        cout << it << " ";
    }
}
int main()
{
    vector<int> arr = {2, 1, 3};
    optimal(arr, arr.size());
    return 0;
}