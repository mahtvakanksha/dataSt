#include <iostream>
#include <vector>
using namespace std;

void brute(vector<int> &arr, int n)
{
    vector<int> ans;
    for (int i = 0; i < n - 1; i++)
    {
        bool allSmallR = true;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                allSmallR = false;
                break;
            }
        }
        if (allSmallR == true)
            ans.push_back(arr[i]);
    }
    ans.push_back(arr[n - 1]);
    for (auto it : ans)
    {
        cout << it << " ";
    }
}
void optimal(vector<int> &arr, int n)
{
    int greatest = arr[n - 1];
    vector<int> leaders;
    arr.push_back(arr[n - 1]);
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] >= greatest)
        {
            greatest = arr[i];
            leaders.push_back(arr[i]);
        }
    }
    for (auto it : leaders)
        cout << it << " ";
}
int main()
{
    vector<int> v = {10, 22, 12, 3, 0, 6};
    optimal(v, v.size());
    return 0;
}