#include <iostream>
using namespace std;
void rearrangeBrute(int *arr, int n)
{
    int *pos = new int[n];
    int *neg = new int[n];
    int posIndex = 0, negIndex = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
            pos[posIndex++] = arr[i];
        else
            neg[negIndex++] = arr[i];
    }
    int i = 0, j = 0, k = 0;
    while (i < posIndex && j < negIndex)
    {
        if (k % 2 == 0)
            arr[k++] = pos[i++];
        else
            arr[k++] = neg[j++];
    }

    while (i < posIndex)
    {
        arr[k++] = pos[i++];
    }

    while (j < negIndex)
    {
        arr[k++] = neg[j++];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    delete[] pos;
    delete[] neg;
}
void optimal(int *arr, int n)
{
    int *ans = new int[n];
    int even = 0, odd = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            if (even < n)
            {
                ans[even] = arr[i];
                even += 2;
            }
        }
        else
        {
            if (odd < n)
            {
                ans[odd] = arr[i];
                odd += 2;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    delete[] ans;
}
int main()
{
    int n;
    cout << "enter size: ";
    cin >> n;
    int *arr = new int[n];
    cout << "enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    optimal(arr, n);
    delete[] arr;
    return 0;
}