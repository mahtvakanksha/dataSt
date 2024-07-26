#include <iostream>
#include <vector>
using namespace std;
bool elePresent(vector<int> &v, int i, int k)
{
    if (i == v.size())
    {
        return false;
    }
    return v[i] == k || elePresent(v, i + 1, k);
}

// finding all occurences of an element, using vector as an argument
vector<int> findAllOcc(vector<int> &v, int k, int i, vector<int> &res)
{
    if (i == v.size())
        return res;
    if (v[i] == k)
        res.push_back(i);
    return findAllOcc(v, k, i + 1, res);
}

// finding all occurences of an element, not using vector as an argument
vector<int> findAllOccurences(vector<int> &v, int k, int i)
{
    vector<int> res;
    if (i == v.size())
    {
        return res;
    }
    if (v[i] == k)
        res.push_back(i);

    vector<int> returningAnsVector = findAllOccurences(v, k, i + 1);
    res.insert(res.end(), returningAnsVector.begin(), returningAnsVector.end());
    return res;
}

int main()
{
    int n;
    cout << "enter the num of ele";
    cin >> n;
    vector<int> v(n);
    cout << "enter array elements";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int k;
    cout << "enter key";
    cin >> k;
    vector<int> res;
    // res = findAllOcc(v, k, 0, res);
    // cout<<elePresent(v, 0, k);
    res = findAllOccurences(v, k, 0);
    for (auto it : res)
        cout << it << " ";
    return 0;
}