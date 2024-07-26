#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int *c = a;
    a = b;
    b = c;
}
void sortBrute(int *arr, int n)
{
    // merge or quicksort
}
void sortBetter(int *arr, int n)
{
    int countZero = 0, countOne = 0, countTwo = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            countZero++;
        else if (arr[i] == 1)
            countOne++;
        else
            countTwo++;
    }
    int index = 0;
    for (int i = 0; i < countZero; i++)
        arr[index++] = 0;
    for (int i = 0; i < countOne; i++)
        arr[index++] = 1;
    for (int i = 0; i < countTwo; i++)
        arr[index++] = 2;
}
void sortOptimalMine(int *arr, int n)
{
    int i = 0, k = 0, j = n - 1;
    while (k <= j)
    {
        if (arr[k] == 2)
        {
            swap(arr[k], arr[j]);
            j--;
        }
        else if (arr[k] == 0)
        {
            swap(arr[k], arr[i]);
            i++;
            k++;
        }
        else
            k++;
    }
}
void SortDutchNationalFlag(int *arr, int n)
{
    // O(N) and SC---> O(1)
    int mid = 0, high = n - 1, low = 0;
    for (int i = 0; i < n; i++)
    {

        switch (arr[mid])
        {
        case 0:
            swap(arr[low], arr[mid]);
            mid++;
            low++;
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(arr[high], arr[mid]);
            high--;
            break;
        }
    }
}
int main()
{
    int n;
    cout << "enter size";
    cin >> n;
    int *arr = new int[n];
    cout << "enter elements";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    SortDutchNationalFlag(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}