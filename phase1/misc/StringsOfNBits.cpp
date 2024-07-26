#include <iostream>
#include <math.h>
#include <string>
using namespace std;
int main()
{
    int n;
    cout << "enter";
    cin >> n;
    int num = pow(2, n);
    int k = 0;
    while (num > k)
    {
        int i = k;
        string ans = "";
        for (int j = 0; j < n; ++j)
        {
            int r = i & 1;
            char c = '0' + r;
            ans = c + ans;
            // cout << ans << endl;
            i = i >> 1;
        }
        cout << ans << endl;
        k++;
    }
    return 0;
}