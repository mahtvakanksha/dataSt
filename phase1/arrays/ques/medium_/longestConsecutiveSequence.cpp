// Longest Consecutive Sequence in an Array
#include <iostream>
#include <algorithm>
#include <unordered_set>

using namespace std;
bool linearSearch(int *arr, int n, int ele)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == ele)
            return true;
    }
    return false;
}
int brute(int *arr, int n)
{
    int count, ele;
    int longest = 1;
    for (int i = 0; i < n; i++)
    {
        ele = arr[i];
        count = 1;
        while (linearSearch(arr, n, ele + 1) == true)
        {
            count++;
            ele++;
        }
        longest = max(longest, count);
    }
    return longest;
}
int better(int *arr, int n)
{
    // time complexity will be O(NlogN)+O(N)
    // sort the array first
    sort(arr, arr + n);
    int currCount = 0, longest = 1, lastSmallest = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        // next consecutive element appears
        if (arr[i] == lastSmallest + 1)
        {
            currCount++;
            lastSmallest = arr[i];
        }
        // skip if same element
        else if (arr[i] != lastSmallest)
        {
            currCount = 1;
            lastSmallest = arr[i];
        }
        longest = max(longest, currCount);
    }
    return longest;
}
int optimal(int *arr, int n)
{
    // TC-->O(N)+O(2N)
    int longest = 0;
    unordered_set<int> st;
    for (int i = 0; i < n; i++)
        st.insert(arr[i]);

    for (auto it : st)
    {
        if (st.find(it - 1) == st.end())
        {
            int count = 0;
            int start = it;
            while (st.find(start) != st.end())
            {
                start++;
                count++;
            }
            longest = max(longest, count);
        }
    }
    return longest;
}
int main()
{
    int n;
    cout << "enter array size";
    cin >> n;
    int *arr = new int[n];
    cout << "enter aarray elements";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << " " << optimal(arr, n);
    return 0;
}