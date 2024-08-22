#include <iostream>
#include <vector>

using namespace std;
int pascal(int n, int r)
{
    // 10c2=10*9/2*1
    int res = 1;
    for (int i = 0; i < r; i++)
    {
        res *= n - i;
        res /= i + 1;
    }
    return res;
}
void pascalRow(int n)
{
    int r = 0;
    for (int i = 0; i < n; i++)
    {
        cout << pascal(n - 1, r++) << " ";
    }
}
void pascalTiangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        pascalRow(i);
        cout << endl;
    }
}

// pascal's row improved:

int main()
{
    cout << "enter row num";
    int n;
    cin >> n;
    // vector<int> v(n);
    // for (int i = 0; i < n; i++)
    //     cin >> v[i];
    // int i, j;
    // cout << "enter row and col";
    // cin >> i >> j;
    // ques1:find ith row and jth col in pascal's triangle:
    // cout << "the value of row " << i << " col " << j << " is " << pascal(i - 1, j - 1);

    // ques2:print nth row of pascal's triangle:
    // pascalRow(n);

    // ques3: triangle:
    pascalTiangle(n);
    return 0;
}