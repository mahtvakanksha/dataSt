#include <iostream>
#include <vector>
using namespace std;
int RBS(vector<int> &v, int s, int e, int k)
{
    if (s > e)
        return -1;
    int m = s + (e - s) / 2;
    if (v[m] == k)
        return m;

    // Check if the left half is sorted
    if (v[s] <= v[m])
    {
        // If the key lies in the range of the sorted left half
        if (k >= v[s] && k <= v[m])
            return RBS(v, s, m - 1, k);
        else // Search in the right half
            return RBS(v, m + 1, e, k);
    }
    else // The right half must be sorted
    {
        // If the key lies in the range of the sorted right half
        if (k >= v[m] && k <= v[e])
            return RBS(v, m + 1, e, k);
        // Otherwise, search in the left half
        return RBS(v, s, m - 1, k);
    }
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
    cout << RBS(v, 0, v.size() - 1, k);
    return 0;
}