#include <iostream>
using namespace std;

int firstOccurrence(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] < key) // right me jaao
        {
            start = mid + 1;
        }
        else if (arr[mid] > key) // left
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int lastOccurrence(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] < key) // right me jaao
        {
            start = mid + 1;
        }
        else if (arr[mid] > key) // left
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int main()
{
    int arr[5] = {1, 4, 5, 5, 5};

    cout << "First occurrence of 5 id at index : " << firstOccurrence(arr, 6, 5) << endl;
    cout << "last occurrence of 5 id at index : " << lastOccurrence(arr, 6, 5) << endl;
    return 0;
}