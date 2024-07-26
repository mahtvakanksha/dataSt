#include <iostream>
using namespace std;
bool search(int arr[], int size, int key)
{
    for (int j = 0; j <= size; j++)

    {
        if (arr[j] == key)
            return true;
    }
    return false;
}
int main()
{ // linear search
    // int key;
    // bool boolean;
    // int arr[3];
    // for (int i = 0; i < 3; i++)
    // {
    //     cin >> arr[i];
    // }
    // cout << "enter the key you wnat to search";
    // cin >> key;
    // boolean = search(arr, 3, key);
    // if (boolean == true)
    // {
    //     cout << "present";
    // }
    // else
    //     cout << "absent";

    // reverse of an array;
    // int i, j, temp;
    // int arr[] = {1, 2, 3, 4, 5, 6};
    // i = 0;
    // j = 5;
    // for (int k = 0; k < 6 / 2; k++)
    // {
    //     temp = arr[i];
    //     arr[i] = arr[j];
    //     arr[j] = temp;
    //     i++;
    //     j--;
    // }
    // for (int k = 0; k < 6; k++)
    // {
    //     cout << arr[k];
    // }

    // swap alternatives
    // int i, j = 1, arr[] = {1, 2, 3, 4, 5, 6};
    // int temp;
    // for (i = 0; i < 6; i += 2)
    // {
    //     if (i < 6)
    //     {
    //         temp = arr[i];
    //         arr[i] = arr[j];
    //         arr[j] = temp;
    //         j += 2;
    //     }
    // }
    // for (i = 0; i < 6; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // unique and duplicate elements
    int arr[] = {1, 1, 3, 4, 4};
    int i, j = i + 1, count = 0;
    for (i = 0; i < 5; i++)
    {
        for (j; j < 5; j++)
        {
            if (arr[i] == arr[j])
                count++;

            continue;
        }
        if (count == 0)
        {
            cout << "\nunique element:" << arr[i];
        }
    }

    return 0;
}