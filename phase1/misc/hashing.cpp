#include <iostream>
#include <vector>
#include <map>
using namespace std;
// array hashing:
void bruteForceHashing(vector<int> &arr, int key)
{
    // o(N) approach:
    int count = 0;
    for (int j = 0; j < arr.size(); j++)
    {
        if (arr[j] == key)
            count++;
    }
    cout << key << " occurs " << count << " times" << endl;
}

vector<int> hashing(vector<int> arr, int max)
{
    vector<int> hashArray(arr.size(), 0);
    for (int i = 0; i < arr.size(); i++)
    {
        hashArray[arr[i]]++;
    }
    return hashArray;
}

vector<int> hashCharArray(vector<char> &a)
{
    vector<int> res(256, 0);
    for (int i = 0; i < a.size(); i++)
    {
        res[a[i]]++;
    }
    return res;
}

// map() hashing:sorted order-->array hashing
map<long long, long long> mapHashing(vector<int> &v)
{ // storing in mapp
    map<long long, long long> m;
    for (int i = 0; i < v.size(); i++)
    {
        m[v[i]]++;
    }
    return m;
}

// map():string hashing
map<char, int> mapStringHashing(vector<char> &v)
{
    map<char, int> m;
    for (int i = 0; i < v.size(); i++)
    {
        m[v[i]]++;
    }
    return m;
}

int main()
{
    int n;
    cout << "enter number of elements and elements" << endl;
    cin >> n;
    vector<char> a(n, 0);
    // vector<int> v(256, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // map string hashing:
    map<char, int> m;

    int times;
    char ch;
    cout << "how many characters you wanna search for?:";
    cin >> times;
    while (times--)
    {
        cout << "enter char you'd like to search for" << endl;
        cin >> ch;
        m = mapStringHashing(a);
        // fetching from mapp
        cout << ch << " appears " << m[ch] << " times" << endl;
    }

    // map hashing:
    // map<long long, long long> mapp;
    // int times;
    // int num;
    // cout << "how many characters you wanna search for?:";
    // cin >> times;
    // while (times--)
    // {
    //     cout << "enter num you'd like to search for" << endl;
    //     cin >> num;
    //     mapp = mapHashing(a);
    //     cout << num << " appears " << mapp[num] << " times" << endl;
    // }

    // brute force:+hashing
    //  int key;
    //  cout << "enter key: ";
    //  cin >> key;
    //  bruteForceHashing(v, key);
    //  int max, num, times;
    //  cout << "enter the max number ";
    //  cin >> max;
    //  cout << "how many numbers you wanna search for?:";
    //  cin >> times;
    //  while (times--)
    //  {
    //      cout << "enter number you'd like to search for" << endl;
    //      cin >> num;
    //      v = hashing(a, max);
    //      if (num <= max)
    //      {
    //          cout << num << " appears " << v[num] << " times" << endl;
    //      }
    //      else
    //          cout << num << " appears 0 times" << endl;
    //  }

    // character hashing
    // int times;
    // char ch;
    // cout << "how many characters you wanna search for?:";
    // cin >> times;
    // while (times--)
    // {
    //     cout << "enter char you'd like to search for" << endl;
    //     cin >> ch;
    //     v = hashCharArray(a);

    //     cout << ch << " appears " << v[ch] << " times" << endl;
    // }
    return 0;
}