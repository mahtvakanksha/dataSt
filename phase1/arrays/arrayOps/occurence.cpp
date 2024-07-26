// array:occurence of a number in an array:upto
#include <iostream>
using namespace std;

void occurence(int arr[], int n)
{
    int occ[5] = {0};
    for (int i = 0; i < n; i++)
    {
        if (occ[arr[i]] == 0)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[i] == arr[j])
                    occ[arr[i]]++;
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        cout << occ[i] << " ";
    }
}
int main()
{
    int arr[] = {1, 1, 2, 2, 2, 3, 1, 2, 1, 2, 3, 1, 3, 3, 1, 2, 4};
    occurence(arr, 17);
    // for (int i = 0; i < 17; i++)
    //     cout << visited[i];
    return 0;
}