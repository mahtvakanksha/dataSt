#include <iostream>
using namespace std;
void insertionSort(int *arr, int n)
{
    for (int i = 1; i < n - 1; i++)
    {
        int j = i - 1;
        int temp = arr[i];

        while (j >= 0)
        {
            if (arr[j] <= temp)
            {
                break;
            }
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}
void insertionRecursion(int *arr, int i, int n)
{
    if (n == i)
        return;
    int j = i - 1;
    int temp = arr[i];
    while (j >= 0)
    {
        if (arr[j] <= temp)
            break;
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = temp;
    insertionRecursion(arr, i + 1, n);
}
int main()
{
    int arr[] = {10, 1, 7, 4, 8, 2, 11};
    // insertionSort(arr, 7);
    insertionRecursion(arr, 0, 7);
    cout << "array after sorting is:" << endl;
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}