#include <iostream>
#include <cmath>
using namespace std;
void swap(int &a, int &b)
{
    int c = a;
    a = b;
    b = c;
}
bool linearSearch(int *arr, int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
            return true;
    }
    return false;
}
int optimizedLinearSearch(int *arr, int n, int key)
{
    // transposition
    /*
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            swap(arr[i], arr[i - 1]);
            return i;
        }
    }
    */
    // move head front
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            swap(arr[i], arr[0]);
            return i;
        }
    }
    return -1;
}
int binarySearchIterative(int *arr, int n, int key)
{
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = floor((low + high) / 2);
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] > key)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}
int binSearchRec(int *arr, int l, int h, int key)
{
    if (l <= h)
    {
        int mid = (l + h) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] > key)
            return binSearchRec(arr, l, mid - 1, key);
        else
            return binSearchRec(arr, mid + 1, h, key);
    }
    return -1;
}
int main()
{
    int size, n;
    cout << "enter the size the of array" << endl;
    cin >> size;
    cout << "enter the number of elements" << endl;
    cin >> n;
    int *A = new int[n];
    cout << "enter elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    int key;
    cout << "enter a key: ";
    cin >> key;
    // bool isPresent = linearSearch(A, n, key);
    // cout << "presence of element: " << isPresent;
    // int isPresentIndex = optimizedLinearSearch(A, n, key);
    // cout << "element is present at : " << isPresentIndex;
    // isPresentIndex = optimizedLinearSearch(A, n, key);
    // cout << "element is present at : " << isPresentIndex;
    // int binarySearchAns = binarySearchIterative(A, n, key);
    // cout << " element found " << binarySearchAns;
    int binRec = binSearchRec(A, 0, n - 1, key);
    cout << binRec;
    delete[] A;
    return 0;
}