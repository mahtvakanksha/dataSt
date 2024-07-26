// insert x at its position in sorted array
// check whether an array is sorted or not
// bring all negatives on left side and all positives on right side
#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
    int c = a;
    a = b;
    b = c;
}
void insertAt(int *arr, int key, int n)
{
    int i = n - 1;

    while (arr[i] > key)
    {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = key;
}
bool isSorted(int *arr, int n)
{
    if (n == 0 || n == 1)
        return 1;
    /* approach1:

    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] > arr[i])
            return false;
    }
    return true;
    */
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
            return false;
    }
    return true;
}
void numberLineRep(int *arr, int n)
{
    int i = 0;
    int j = n - 1;
    // brute force approach:
    while (i < j)
    {
        while (arr[i] < 0)
            i++;
        while (arr[j] >= 0)
            j--;
        swap(arr[i], arr[j]);
    }
}
int main()
{
    // int arr1[11] = {12, 32, 35, 54, 56, 57, 67, 68, 78, 97};
    // insertAt(arr1, 70, 10);
    // cout << isSorted(arr1, 10);

    int arr[] = {-12, 239, 353, 76, -23, 324, -23, 23, -246};
    numberLineRep(arr, 9);
    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}