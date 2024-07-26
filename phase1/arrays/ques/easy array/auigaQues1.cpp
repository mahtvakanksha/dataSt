// array is sorted and rotated:
// find greatest element
#include <iostream>
using namespace std;
int brute(int arr[], int s, int e)
{
    int n = e - s + 1;
    int pivot = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[pivot])
            pivot = i;
    }
    return pivot;
}
int better()
{
    // rotated binary search
}
int main()
{
    int arr[] = {5, 6, 7, 8, 9, 10, 1, 2, 3, 4};
    cout << better(arr, 0, 9);
    return 0;
}