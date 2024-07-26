// totalSubarraysWithSumK
#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
void brute(vector<int> &v, int K)
{
    int n = v.size();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k < j; k++)
            {
                sum += v[k];
            }
            if (sum == K)
            {
                count++;
            }
        }
    }
    cout << " " << count;
}
void better(vector<int> &v, int k)
{
    int n = v.size();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += v[j];

            if (sum == k)
            {
                count++;
            }
        }
    }
    cout << " " << count;
}
int optimal(vector<int> &v, int K)
{
    unordered_map<int, int> mp;
    mp[0] = 1;
    int presum = 0, cnt = 0;
    for (int i = 0; i < v.size(); i++)
    {
        presum += v[i];
        int diff = presum - K;
        if (mp.find(diff) != mp.end())
        {
            cnt += mp[diff];
        }
        mp[presum]++;
    }
    return cnt;
}
int main()
{
    int n;
    cout << "enter val of n";
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int k = 3;
    // brute(v, k);
    // better(v, k);
    cout << " " << optimal(v, k);
    return 0;
}