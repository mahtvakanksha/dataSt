#include <iostream>
#include <vector>
using namespace std;
int binarySearch(vector<int> &v, int s, int e, int k)
{
    if (s > e)
        return -1;
    int m = s + (e - s) / 2;
    if (v[m] == k)
        return m;
    if (k > v[m])
        return binarySearch(v, m + 1, e, k);
    else
        return binarySearch(v, s, m - 1, k);
}
int main()
{
    int n;
    cout << "enter the num of ele";
    cin >> n;
    vector<int> v(n);
    cout << "enter array elements";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int k;
    cout << "enter key";
    cin >> k;
    cout << binarySearch(v, 0, v.size() - 1, k);
    return 0;
}