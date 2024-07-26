#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{

    bool swapped = false;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
        {
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}
main()
{
    int arr[6] = {10, 1, 7, 6, 14, 9};
    bubbleSort(arr, 6);

    return 0;
}