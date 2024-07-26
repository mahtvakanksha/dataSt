// striver's array ques part1:
#include <iostream>
// #include <set>
using namespace std;
int largestElement(int *arr, int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}
int secondLargestBetter(int *arr, int n, int l)
{
    int secLargest = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > secLargest && arr[i] != l)
            secLargest = arr[i];
    }
    return secLargest;
}
int secondLargestElementOptimized(int *arr, int n)
{
    int largest = INT_MIN;
    int sec = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            sec = largest;
            largest = arr[i];
        }
        else if (arr[i] > sec && arr[i] != largest)
            sec = arr[i];
    }
    return sec;
}
bool sortedArray(int *arr, int n)
{
    bool isSorted = true;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
            return false;
    }
    return true;
}
bool sortedBeforeRotation(int *arr, int n)
{ // refer 1752 on leetcode, runs there but not here.idk!why
    int pair = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
            pair++;
    }
    if (arr[n - 1] > arr[0])
        pair++;
    if (pair <= 1)
        return true;
    return false;
}
// int removeDuplicatesBrute(int *arr, int n)
// {
//     set<int> s;
//     for (int i = 0; i < n; i++)
//     {
//         s.insert(arr[i]);
//     }
//     int index = 0;
//     for (auto it : s)
//     {
//         arr[index] = it;
//         index++;
//     }
//     return index;
// }
int removeDuplicatesOptimized(int *arr, int n)
{
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (arr[j] != arr[i])
        {
            arr[i + 1] = arr[j];
            i++;
        }
    }
    return i + 1;
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
    // int k = largestElement(arr, n);
    // int s = secondLargestBetter(arr, n, k);
    // cout << "second largest element is: " << s;
    // int s = secondLargestElementOptimized(arr, n);
    // cout << "second largest element is: " << s;
    // cout << sortedArray(arr, n);
    // cout<<sortedBeforeRotation(arr,n);
    cout << "after removing duplicates";
    // int size = removeDuplicatesBrute(arr, n);
    int size = removeDuplicatesOptimized(arr, n);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    delete[] arr;
    return 0;
}