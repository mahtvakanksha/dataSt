#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void bubbleSort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++) // this loop runs from 1 to n-1 times only since after n-1 passes it is guaranteed to be sorted
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
}
void bubbleSortOptimized(int *arr, int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        int alreadySwapped = 0;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                alreadySwapped = 1;
            }
        }
        if (alreadySwapped == 0)
            break;
    }
}
void recursiveBubbleSort(int *arr, int n)
{
    if (n == 1)
        return;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
            swap(arr[i], arr[i + 1]);
    }
    recursiveBubbleSort(arr, n - 1);
}
int main()
{
    int arr[] = {6, 2, 46, 67, 33, 76};
    // bubbleSortOptimized(arr, 6);
    recursiveBubbleSort(arr, 6);
    cout << "array after sorting is:" << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}