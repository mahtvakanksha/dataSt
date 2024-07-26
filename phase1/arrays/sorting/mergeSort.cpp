#include <iostream>
using namespace std;
void merge(int *arr, int low, int mid, int high)
{
    int n = high - low + 1;
    int *temp = new int[n];
    int left = low;
    int right = mid + 1;
    int i = 0;
    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
            temp[i++] = arr[left++];
        else
            temp[i++] = arr[right++];
    }
    while (left <= mid)
        temp[i++] = arr[left++];
    while (right <= high)
        temp[i++] = arr[right++];
    for (int i = 0; i < n; i++)
    {
        arr[i + low] = temp[i];
    }
    delete[] temp;
}
void mergeSort(int *arr, int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}
int main()
{
    int n;
    cout << "size";
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    mergeSort(arr, 0, n - 1);
    cout << "array after sorting is:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    delete[] arr;
    return 0;
}