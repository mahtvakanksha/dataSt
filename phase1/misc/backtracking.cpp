#include <iostream>
using namespace std;
// using dynamic array
void stringsOfBits(int n, char *array, int i)
{
    if (i == n)
    {
        for (int j = 0; j < n; j++)
        {
            cout << array[j];
        }
        cout << endl;
    }
    else
    {
        array[i] = '0';
        stringsOfBits(n, array, i + 1);
        array[i] = '1';
        stringsOfBits(n, array, i + 1);
        // cout << endl;
    }
}
void k_strings(int *array, int k, int n, int i)
{
    if (i == n)
    {
        for (int j = 0; j < n; j++)
        {
            cout << array[j];
        }
        cout << endl;
    }
    else
    {
        for (int j = 0; j < k; j++)
        {
            array[i] = j;
            k_strings(array, k, n, i + 1);
        }
    }
}

int main()
{
    int n;
    cout << "enter : ";
    cin >> n;
    int k;
    cout << "key ";
    cin >> k;
    int *array;
    array = new int[n + 1]; //+1 for null char;
    array[n] = '\0';
    for (int i = 0; i < n; i++)
    {
        array[i] = 0;
    }
    //  array[n] = {0}; // available withcpp11 only
    k_strings(array, n, k, 0);
    delete[] array;
    return 0;
}

// int main()
// {
//     // for binary strings
//     int n;
//     cout << "enter : ";
//     cin >> n;
//     char *array;
//     array = new char[n + 1]; //+1 for null char;
//     array[n] = '\0';
//     for (int i = 0; i < n; i++)
//     {
//         array[i] = 0;
//     }
//     //  array[n] = {0}; // available withcpp11 only
//     stringsOfBits(n, array, 0);
//     delete[] array;
//     return 0;
// }