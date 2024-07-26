#include <iostream>
#include <vector>

using namespace std;

vector<int> calculateMultiplication(vector<int> &nums)
{
    int n = nums.size();
    vector<int> result(n, 1);

    // Calculate left side products
    int left = 1;
    for (int i = 0; i < n; i++)
    {
        result[i] *= left;
        left *= nums[i];
    }

    // Calculate right side products
    int right = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        result[i] *= right;
        right *= nums[i];
    }

    return result;
}

int main()
{
    int arr[] = {4, 2, 8};
    vector<int> input(arr, arr + sizeof(arr) / sizeof(arr[0]));

    vector<int> result = calculateMultiplication(input);

    cout << "Output: ";
    for (int i = 0; i < result.size(); ++i)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}