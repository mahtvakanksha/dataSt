//

#include <iostream>
#include <vector>
using namespace std;

int spiralPrint(vector<vector<int>> &v, int m, int n)
{
    vector<int> ans;
    int left = 0;
    int top = 0;
    int right = n - 1;
    int bottom = m - 1;
    while (top <= bottom && left <= right)
    {
        // right
        for (int i = left; i <= right; i++)
        {
            ans.push_back(v[top][i]);
        }
        top++;
        // bottom
        for (int i = top; i <= bottom; i++)
        {
            ans.push_back(v[i][right]);
        }
        right--;
        // left
        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                ans.push_back(v[bottom][i]);
            }
            bottom--;
        }
        // top
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                ans.push_back(v[i][left]);
            }
            left++;
        }
    }
    cout << "spiral" << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}
int main()
{
    int m, n;
    cout << "enter number of rows and cols: ";
    cin >> m >> n;
    vector<vector<int>> v(m, vector<int>(n));
    cout << "enter array elements" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> v[i][j];
        }
    }
    spiralPrint(v, m, n);
    return 0;
}