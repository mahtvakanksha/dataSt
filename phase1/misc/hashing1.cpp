#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
// find occurence of each element-->TC:O(N*N) & SC:(N)
int occursNtimes(vector<int> &v, int i, vector<bool> &visited)
{

    // int key = arr[i];
    visited[i] == true;
    int count = 1;
    for (int j = i + 1; j < v.size(); j++)
    {
        if (v[j] == v[i] && visited[j] != true)
        {
            count++;
            visited[j] = true;
        }
        else
            continue;
    }
    return count;
}

// using map:O(N) for N elements O(N) space
unordered_map<int, int> occurenceByHash(vector<int> &v)
{
    unordered_map<int, int> m;
    for (int i = 0; i < v.size(); i++)
    {
        m[v[i]]++;
    }

    return m;
}

int main()
{
    int n;
    cout << "enter n and elements:" << endl;
    cin >> n;
    vector<int> a(n);
    unordered_map<int, int> map;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    map = occurenceByHash(a);
    for (auto it : map)
    {
        cout << it.first << "-->" << it.second << endl;
    }
    return 0;
}

// int main()
// {
//     // find occurence of each element-->TC:O(N*N) & SC:(N)
//     int n;
//     cout << "enter n and elements:" << endl;
//     cin >> n;
//     vector<int> a(n);
//     vector<bool> visited(n, false);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     for (int i = 0; i < a.size(); i++)
//     {
//         if (visited[i] == false)
//         {
//             int count = occursNtimes(a, i, visited);
//             cout << a[i] << " occurs " << count << " times " << endl;
//         }
//     }
//     return 0;
// }