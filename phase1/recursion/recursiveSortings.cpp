#include <iostream>
#include <vector>
using namespace std;
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void bubbleSort(int arr[], int n)
{
    if (n == 1)
        return;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    bubbleSort(arr, n - 1);
}
void selectionSort(int arr[], int beginIndex, int endIndex)
{
    if (beginIndex == endIndex)
        return;
    int minIndex = beginIndex;
    for (int i = beginIndex; i < endIndex; i++)
    {
        if (arr[minIndex] > arr[i])
            minIndex = i;
    }

    swap(arr[beginIndex], arr[minIndex]);
    selectionSort(arr, beginIndex + 1, endIndex);
}
int main()
{
    int arr[] = {9, 15, 2, 7, 3, 4};
    selectionSort(arr, 0, 6);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}