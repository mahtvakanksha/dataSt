// reversing array using auxillary array-->SC=O(N) (method 1)and method 2 is swapping ith and n-i-1th position until i is less than j---> both takes O(N) time
// left shift/right shift--> shifting the array elements by 1 (losing one extreme element)
// rotating array: storing the extreme element on other extreme side
#include <iostream>
using namespace std;
void leftShift(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = 0;
}
void rightShift(int *arr, int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = 0;
}
void rotateLTR(int *arr, int n)
{
    int temp = arr[0];
    for (int i = 0; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
}
void rotateRTL(int *arr, int n)
{
    int temp = arr[n - 1];
    for (int i = n - 1; i >= 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
}
int main()
{
    int arr[] = {1, 2, 43, 45, 645, 756, 76, 67, 887};
    // leftShift(arr, 9);
    // rightShift(arr, 9);
    // rotateLTR(arr, 9);
    rotateRTL(arr, 9);
    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}