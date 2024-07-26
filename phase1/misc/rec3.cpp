#include <iostream>
#include <vector>
using namespace std;

void swap(long long &a, long long &b)
{
    long long c;
    c = a;
    a = b;
    b = c;
}

// two pointer approach:
vector<long long> rev(vector<long long> v, int first, int last)
{
    if (first >= last)
        return v;
    swap(v[first], v[last]);
    v = rev(v, first + 1, last - 1);
    return v;
}

// one pointer approach:
vector<long long> reverse(vector<long long> &nums, int i, int n)
{
    if (i >= n / 2)
        return nums;
    swap(nums[i], nums[n - i - 1]);
    nums = reverse(nums, i + 1, n);
    return nums;
}

// fibonacci series:
int fibonacci(int n)
{
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// TOWER OF HANOI:O((2^n)-1)
void towerOfHanoi(int n, string src, string helper, string des)
{
    if (n == 1)
    {
        cout << " Disk " << n << " transfered from " << src << " to " << des << endl;
        return;
    }
    towerOfHanoi(n - 1, src, des, helper);
    cout << " Disk " << n << " transfered from " << src << " to " << des << endl;
    towerOfHanoi(n - 1, helper, src, des);
}

// array is sorted or not:
bool isArraySorted(int &arr, int n)
{
    if (n <= 1)
        return true;
    return (arr[n - 1] < arr[n - 2]) ? false : isArraySorted(arr, n - 1);
}

int main()
{
    cout << "enter: ";
    int n;
    cin >> n;
    int arr[] = {10, 20, 30, 40, 50};
    // cout << fibonacci(n);
    // towerOfHanoi(n, "S", "H", "D");
    cout << isArraySorted(arr, n);
    // vector<long long> v(n), a;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> v[i];
    // }
    // // v = rev(v, 0, n - 1);
    // a = reverse(v, 0, n);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i] << " ";
    // }
    return 0;
}