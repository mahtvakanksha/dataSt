#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void printArray(vector<int> &res)
{
    for (int item : res)
    {
        cout << item << " ";
    }
    cout << endl;
}
void permutations(vector<int> &arr, vector<vector<int>> &ans, int start, int end)
{
    if (start == end)
    {
        ans.push_back(arr);
    }
    else
    {
        for (int i = start; i <= end; i++)
        {
            swap(arr[start], arr[i]);
            permutations(arr, ans, start + 1, end);
            swap(arr[start], arr[i]);
        }
    }
}
int main()
{
    vector<int> arr = {3, 2, 1};
    int n = arr.size();
    vector<vector<int>> res;

    permutations(arr, res, 0, n - 1);
    sort(res.begin(), res.end());
    for (auto item : res)
    {
        printArray(item);
    }
    return 0;
}