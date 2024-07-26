#include <iostream>
#include <vector>
using namespace std;
bool helper(vector<int> &v, int i)
{
    if (i == v.size() - 1)
        return true;
    return (v[i] <= v[i + 1]) && helper(v, i + 1);
}
bool helper2(vector<int> &v, int i)
{
    if (i <= 1)
        return true;
    if (v[i - 1] <= v[i])
    {
        return helper2(v, i - 1);
    }
    return false;
}
bool sortedOrNot(vector<int> &v)
{
    return helper(v, 0);
    // return helper2(v, v.size() - 1);
}
int main()
{
    int n;
    cout << "enter n";
    cin >> n;
    vector<int> arr(n);
    cout << "enter array elements ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << sortedOrNot(arr);

    return 0;
}