#include <iostream>
#include <vector>
using namespace std;

void binaryStrings(int n, vector<int> &a)
{
    if (n < 1)
    {
        for (int i = 0; i < a.size(); i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    else
    {
        a[n - 1] = 0;
        binaryStrings(n - 1, a);
        a[n - 1] = 1;
        binaryStrings(n - 1, a);
    }
}

void k_strings(int n, vector<int> &arr, int k)
{
    if (n == 0)
    {
        for (int i = 0; i < arr.size(); i++)
            cout << arr[i] << " ";
        cout << endl;
        return;
    }
    else
    {
        for (int key = 0; key < k; key++)
        {
            arr[n - 1] = key;
            k_strings(n - 1, arr, k);
        }
    }
}

int main()
{
    int n;
    cout << "enter: ";

    // int k;
    cin >> n;
    // cin >> k;
    vector<int> arr(n, 0);
    // k_strings(n, arr, k);
    binaryStrings(n, arr);
    return 0;
}