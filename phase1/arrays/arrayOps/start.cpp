#include <iostream>
using namespace std;

// functions for arrays:
void print_array(int n, char arr[])
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main()
{

    int arr[5] = {10, 20, 30, 40, 50};
    // print_array(5, arr);
    char arr1[5] = {'b', 'f', 'd', 't', 'g'};
    // print_array(5, arr1);

    return 0;
}

/*
int main()
{
    int arr[10];
    fill_n(arr, 10, 1);
    for (int i = 0; i < 10; i++)
        cout << arr[i] << endl;
    cout << arr[6];
    return 0;
}
*/