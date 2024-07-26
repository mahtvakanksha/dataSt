#include <iostream>
#include <vector>
using namespace std;
void brute(vector<int> &v, int k)
{
    int n = v.size();
    vector<int> res(n, 0);
    if (k > 0)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j <= k; j++)
            {
                res[i] += v[(i + j) % n];
            }
        }
    }
    else if (k < 0)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j <= -k; j++)
            {
                res[i] += v[(i - j + n) % n];
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << res[i] << " ";
    }
}
int main()
{

    int n, k;
    cout << "enter the n";
    cin >> n;
    cout << "enter array elements";
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cout << "enter the val of k: ";
    cin >> k;
    brute(v, k);

    return 0;
}