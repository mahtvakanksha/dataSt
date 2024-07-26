// removeAfromStr
#include <iostream>
#include <string.h>
#include <vector>
using namespace std;
void removeA(string str, vector<char> &ans, int i)
{
    if (i == str.length())
    {
        return;
    }
    if (str[i] != 'a')
    {
        ans.push_back(str[i]);
    }
    removeA(str, ans, i + 1);
}
int main()
{
    int n;
    cout << "enter the num of ele";
    cin >> n;
    string str;
    cout << "enter string";
    cin >> str;
    if (str.length() != n)
    {
        cout << "Error: The number of characters does not match the length of the string." << endl;
        return 1;
    }

    vector<char> ans(n);
    removeA(str, ans, 0);
    cout << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}