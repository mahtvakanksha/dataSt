// striver's second video:
#include <iostream>
#include <vector>
using namespace std;
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
// ekdum bekar bakwas approach:
void rotateLeft(int *arr, int n, int k)
{
    int temp;
    while (k != 0)
    {
        temp = arr[0];
        for (int i = 1; i < n; i++)
        {
            arr[i - 1] = arr[i];
        }
        arr[n - 1] = temp;
        k--;
    }
}
void rotateBruteForce(int *arr, int n, int k)
{
    k = k % n;
    int *temp = new int[n];
    for (int i = 0; i < k; i++)
    {
        temp[i] = arr[i];
    }
    for (int i = k; i < n; i++)
    {
        arr[i - k] = arr[i];
    }
    // for (int i = n - k; i < n; i++)
    // {
    //     arr[i] = temp[i - (n - k)];
    // }
    for (int i = k - 1; i < n; i++)
    {
        arr[i] = temp[i - k + 1];
    }
}
void reverseArray(int *arr, int start, int end)
{
    int n = end - start + 1;
    for (int i = 0; i <= n / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}
void rotateOptimized(int *arr, int n, int k)
{
    k = k % n;
    if (k == 0)
        return;
    reverseArray(arr, 0, k - 1);
    reverseArray(arr, k, n - 1);
    reverseArray(arr, 0, n - 1);
}
void ZeroesToTheEndOptimized(int *arr, int n)
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }

    // approach 1:in place
    // int i = 0, j = n - 1;
    // while (i < j)
    // {
    //     while (i < n && arr[i] != 0)
    //         i++;
    //     while (j >= 0 && arr[j] == 0)
    //         j--;
    //     if (i < j)
    //         swap(arr[i], arr[j]);
    // }
    // approach 2:
    // int i = 0;
    // for (int j = 0; j < n; j++)
    // {
    //     if (nums[j] != 0)
    //     {
    //         swap(nums[j], nums[i]);
    //         i++;
    //     }
    // }
}
void ZeroesToTheEndBrute(int *arr, int n)
{
    vector<int> temp;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
            temp.push_back(arr[i]);
    }
    int m = temp.size();
    for (int i = 0; i < m; i++)
    {
        arr[i] = temp[i];
    }

    for (int i = m; i < n; i++)
    {
        arr[i] = 0;
    }
    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (arr[i] == 0 && arr[j] != 0)
    //             swap(arr[i], arr[j]);
    //     }
    // }
}
void unionArrayOptimized(int *arr1, int *arr2, int n, int m)
{
    // to ensure large test cases
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);
    int i = 0, j = 0;
    vector<int> v;
    while (i < n && j < m)
    {
        while (i < n - 1 && arr1[i] == arr1[i + 1])
        {
            i++;
        }
        while (j < m - 1 && arr2[j] == arr2[j + 1])
        {
            j++;
        }
        if (arr1[i] < arr2[j])
        {
            v.push_back(arr1[i]);
            i++;
        }
        else if (arr1[i] > arr2[j])
        {
            v.push_back(arr2[j]);
            j++;
        }
        else
        {
            v.push_back(arr1[i]);
            i++;
            j++;
        }
    }

    while (i < n)
    {
        while (i < n - 1 && arr1[i] == arr1[i + 1])
        {
            i++;
        }
        v.push_back(arr1[i]);
        i++;
    }

    while (j < m)
    {
        while (j < m - 1 && arr2[j] == arr2[j + 1])
        {
            j++;
        }
        v.push_back(arr2[j]);
        j++;
    }

    for (auto it : v)
    {
        cout << it << " ";
    }
}
void intersectionBrute(int *arr1, int *arr2, int n, int m)
{
    vector<int> interArr;
    int visited[m] = {0};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr1[i] == arr2[j] && visited[j] == false)
            {
                visited[j] = true;
                interArr.push_back(arr1[i]);
                break;
            }
            if (arr2[j] > arr1[i])
                break;
        }
    }
    for (auto it : interArr)
    {
        cout << it << " ";
    }
}
void intersectionOptimized(int *arr1, int *arr2, int n, int m)
{
    // to ensure large test cases
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);
    int i = 0, j = 0;
    vector<int> interArr;
    while (i < n && j < m)
    {
        if (i > 0 && arr1[i] == arr1[i - 1])
        {
            i++;
            continue;
        }
        if (j > 0 && arr2[j] == arr2[j - 1])
        {
            j++;
            continue;
        }
        if (arr1[i] == arr2[j])
        {
            interArr.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr2[j] > arr1[i])
        {
            i++;
            continue;
        }
        else
        {
            j++;
        }
    }
    for (auto it : interArr)
    {
        cout << it << " ";
    }
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
    // rotateBruteForce(arr, n, 3);
    // rotateOptimized(arr, n, 3);
    // cout << "after rotating left :" << endl;
    // ZeroesToTheEndBrute(arr, n);
    // cout << "after moving zeroes to the end";
    int m;
    cout << "enter size";
    cin >> m;
    int *arr1 = new int[m];
    cout << "enter elements";
    for (int i = 0; i < m; i++)
    {
        cin >> arr1[i];
    }
    // cout << "union array:";
    // unionArrayOptimized(arr, arr1, n, m);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    cout << "intersected array:";
    // intersectionBrute(arr, arr1, n, m);
    intersectionOptimized(arr, arr1, n, m);
    delete[] arr;
    return 0;
}