
#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{   // with the timecomplexity of n sq.
    // spaceComplexity:constant-->O(1)
    int min;
    for (int i = 0; i < n; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}
int main()
{
    int arr[5] = {64, 25, 12, 22, 11};
    selectionSort(arr, 5);
    return 0;
}