// some ques on arrays includes:unique in array(done), all unique in an array(--nay),
// duplicates in an array-->single item(2M+1)(done),all duplicates in an array(--nay),intersection of 2 arrays
// pair sum(done), triplet sum(done), sort 0 1(done), sort 0 1 2;
#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <algorithm>
using namespace std;
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int UniqueElementIs(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j] && i != j)
            {
                count++;
                break;
            }
        }
        if (count == 0)
        {
            return arr[i];
        }
    }
    return -1;
}
int isUnique(int *arr, int n)
{
    // unordered_map<int, int> m;
    // for (int i = 0; i < n; i++)
    // {
    //     m[arr[i]]++;
    // }
    // for (auto it : m)
    // {
    //     if (it.second == 1)
    //         return it.first;
    // }
    // return -1;
}
// int *areAllUnique(int *arr, int n)
// {
//     int *allUnique = new int[n]();
//     for (int i = 0; i < n; i++)
//     {
//         int count = 0;
//         for (int j = 0; j < n; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 count++;
//             }
//             allUnique[arr[i]] = count;
//         }
//     }
//     return allUnique;
// }
void allUniqueMap(int *arr, int n)
{
    unordered_map<int, int> m;
    set<int> s;
    for (int i = 0; i < n; i++)
        m[arr[i]]++;
    for (auto it : m)
        s.insert(it.second);
    if (s.size() == m.size())
        cout << "all are unique";
    else
        cout << "not all unique";
}
int isDuplicate(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        int count = 1;
        for (int j = 0; j < n; j++)
        {
            if (i != j && arr[i] == arr[j])
                count++;
        }
        if (count > 1)
            return arr[i];
    }
    return -1;
}
int isDuplicateMap(int *arr, int n)
{
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[arr[i]]++;
    }
    for (auto it : m)
    {
        if (it.second > 1)
            return it.first;
    }
    return -1;
}
// int *allDuplicates(int *arr, int n)
// {
//     int *A = new int[n](0);
//     for (int i = 0; i < n; i++)
//     {
//     }
// }
void pairsum(int *arr, int n, int key)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = n; j > 0; j--)
        {
            if (arr[i] + arr[j] == key && i < j)
                cout << arr[i] << "," << arr[j] << endl;
        }
    }
}
void pairSumOptimized(int *arr, int n, int key)
{
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        if (arr[i] + arr[j] == key)
        {
            cout << arr[i] << " " << arr[j] << endl;
            i++;
            j--;
        }
        else if (arr[i] + arr[j] > key)
            j--;
        else
            i++;
    }
}
void threeSumOptimized(int *arr, int n, int key)
{
    for (int i = 0; i < n - 2; i++)
    {
        int j = i + 1;
        int k = n - 1;
        while (j < k)
        {
            int sum = arr[i] + arr[j] + arr[k];
            if (sum == key)
            {
                cout << arr[i] << " " << arr[j] << " " << arr[k];
                j++;
                k--;
            }
            else if (sum > key)
                k--;
            else
                j++;
        }
    }
}
void sort01(int *arr, int n)
{
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        while (i < j && arr[i] == 0)
            i++;
        while (i < j && arr[j] == 1)
            j--;
        if (arr[i] == 1 && arr[j] == 0)
        {
            swap(arr[i], arr[j]);

            i++;
            j--;
        }
    }
}
void sort_012_Optimized(int *arr, int n)
{
    int low = 0, mid = 0, high = n - 1;
    while (mid <= high)
    {
        switch (arr[mid])
        {
        case 0:
            swap(arr[low], arr[mid]);
            mid++;
            low++;
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(arr[mid], arr[high]);
            high--;
            break;
        }
    }
}
int main()
{
    int size, n;
    // cout << "enter the size the of array" << endl;
    // cin >> size;
    cout << "enter the number of elements" << endl;
    cin >> n;
    int *A = new int[n];
    cout << "enter elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    // sort(A, A + n);
    // int key;
    // cout << "enter a key";
    // cin >> key;
    // pairsum(A, n, key);
    // pairSumOptimized(A, n, key);
    // threeSumOptimized(A, n, key);
    // brute force approach
    // int unique = UniqueElementIs(A, n);

    // optimized: using maps-->run by CLI
    // int unique = isUnique(A, n);
    // cout << "unique element is:" << unique;

    // all unique elements in an array:Brute force
    // int *ans = areAllUnique(A, n);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << ans[i];
    // }
    // optimized
    // allUniqueMap(A, n);

    // brute force
    // int dup = isDuplicate(A, n);
    // cout << "duplicate element is " << dup;

    // optimized:
    // int dup = isDuplicateMap(A, n);
    // cout << "duplicate element is " << dup;

    // sort01(A, n);
    sort_012_Optimized(A, n);
    for (int i = 0; i < n; i++)
    {
        cout << A[i];
    }
    delete[] A;
    return 0;
}