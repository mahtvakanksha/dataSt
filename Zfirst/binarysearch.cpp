// codehelp approach

#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
            return mid;

        // right wlaa part
        if (arr[mid] < key)
            start = mid + 1;

        else
            end = mid - 1;
        mid = (start + end) / 2;
    }
    return -1;
}

int main()
{
    int even[6] = {2, 4, 6, 8, 10, 12};
    int odd[5] = {3, 8, 11, 14, 16};
    int index = binarySearch(even, 6, 12);
    cout << "element 12 is found at : " << index;
    int index2 = binarySearch(odd, 5, 11);
    cout << endl
         << "element 11 is found at : " << index2;
    return 0;
}

// my approach

// #include <iostream>
// using namespace std;
// // binary search;

// int binary(int arr[], int start, int end, int key)
// {
//     if (end < start)
//         return 0;
//     int mid = (start + end) / 2;
//     if (arr[mid] == key)
//         return 1;
//     else if (arr[mid] < key)
//     {
//         return binary(arr, mid + 1, end, key);
//     }
//     else if (arr[mid] > key)
//     {
//         return binary(arr, start, mid - 1, key);
//     }
// }
// int main()
// {
//     int arr[5] = {12, 23, 35, 45, 56}; // array should alwasy be sorted in binary search

//     int eleFound;
//     int key;
//     cout << "enter element you want to find";
//     cin >> key;
//     eleFound = binary(arr, 0, 4, key);
//     if (eleFound == 1)
//         cout << "element found";
//     else
//         cout << "not found";
//     return 0;
// }