#include <iostream>
#include <unordered_map>
using namespace std;
void largestSubArray(int *arr, int n, int s)
{
    // brute force: won't run for big test cases:my approach
    int len = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += arr[k];
            }
            if (sum > s)
                break;
            if (sum == s)
            {
                len = max(len, j - i + 1);
                break;
            }
        }
        // if (len == s)
        // {
        //     break;
        // }
    }
    cout << len;
}
void bruteLongestLen(int *arr, int n, int s)
{
    // O(N^2)
    int len = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {

            sum += arr[j];

            if (sum == s)
            {
                len = max(len, j - i + 1);
            }
            // else if (sum > s)
            //     break;
        }
        // if (len == s)
        // {
        //     break;
        // }
    }
    cout << len;
}
void betterLongestLen(int *arr, int n, int sum)
{
    // optimal for both positive and negative nums array, but only better for an array with only positive nums
    // TC--->O(N) if unordered map{ which can increase significantly when collision occurs--TC-->O(N^2)} for O(NlogN) for ordered map, SC-->O(N)
    unordered_map<int, int> sumMap;
    int len = 0;
    int currSum = 0;
    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];
        int sumDiff = currSum - sum;
        if (currSum == sum)
        {
            len = max(len, i + 1);
        }
        else if (sumMap.find(sumDiff) != sumMap.end())
        {
            len = max(len, (i - sumMap[sumDiff]));
        }
        if (sumMap.find(currSum) == sumMap.end()) // store the first occurrence of the prefix sum
        {
            sumMap[currSum] = i;
        }
    }
    cout << len;
}
void optimalLnmgestLen(int *arr, int n, int sum)
{
    int winStart = 0, winEnd = 0, len = 0, currSum = 0;
    while (winEnd < n)
    {
        currSum += arr[winEnd];
        while (currSum > sum && winEnd > winStart)
        {
            currSum -= arr[winStart];
            winStart++;
        }
        if (currSum == sum)
        {
            len = max(len, winEnd - winStart + 1);
        }
        winEnd++;
    }
    cout << "length:" << len;
}
int main()
{
    int n;
    cout << "enter size";
    cin >> n;
    int *arr = new int[n];
    cout << "enter elements";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum = 6;
    bruteLongestLen(arr, n, sum);
    // betterLongestLen(arr, n, sum);
    // optimalLnmgestLen(arr, n, sum);
    return 0;
}
