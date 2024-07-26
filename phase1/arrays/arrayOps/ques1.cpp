#include <iostream>
#include <vector>
using namespace std;

void swap(int &i, int &j)
{
    int temp = i;
    i = j;
    j = temp;
}

void arrayMaxMin(vector<int> arr, int n)
{
    int max = INT_MIN;
    int min = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
        if (min > arr[i])
            min = arr[i];
    }
    cout << "min: " << min << " max: " << max;
}

bool linearSearch(vector<int> arr, int n, int key)
{
    for (int i = 0; i < n; i++)
        if (arr[i] == key)
            return true;
    return false;
}

void reverseArrayBrute(vector<int> &arr, int n)
{
    for (int i = 0; i <= n / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}

void reverseArrayTwoPtrs(vector<int> &arr, int i, int j)
{
    while (i <= j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

void revRecursion(vector<int> &arr, int i, int j)
{
    if (i <= j)
    {
        swap(arr[i], arr[j]);
        revRecursion(arr, i + 1, j - 1);
    }
}

void swapAlternates(vector<int> &arr)
{
    for (int i = 0; i < arr.size() - 1; i += 2)
    {
        swap(arr[i], arr[i + 1]);
    }
}

int main()
{
    cout << "enter";
    int n;
    cin >> n;
    vector<int> arr(n);
    cout << "enter array elements " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    swapAlternates(arr);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
/*
 int start, end;
    start = 0;
    end = n - 1;

    revRecursion(arr, start, end);
*/
// reverseArrayTwoPtrs(arr, start, end);

// arrayMaxMin(arr, n);
// cout << "enter the num you wanna check for: ";
// int key;
// cin >> key;
// bool present = linearSearch(arr, n, key);

// reverseArrayBrute(arr, n);
