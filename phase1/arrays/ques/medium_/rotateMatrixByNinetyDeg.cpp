// rotateMatrixByNinetyDeg.cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void swap(int &a, int &b)
{
    int c = a;
    a = b;
    b = c;
}
void brute(vector<vector<int>> &arr, int m, int n)
{
    vector<vector<int>> ans(m, vector<int>(n));

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ans[j][n - i - 1] = arr[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ans[i][j] << "\t";
        }
        cout << endl;
    }
}
void better(vector<vector<int>> &v, int m, int n)
{
    // step 1: transpose:
    for (int i = 0; i < m; i++)
    {
        for (int j = i + 1; j < n; j++)
        {

            swap(v[i][j], v[j][i]);
        }
    }
    cout << "after transpose" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << v[i][j] << "\t";
        }
        cout << endl;
    }

    // reverse rows;
    for (int i = 0; i < m; i++)
    {
        reverse(v[i].begin(), v[i].end());
    }
    cout << "after rotation" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << v[i][j] << "\t";
        }
        cout << endl;
    }
}
void anticlockwise(vector<vector<int>> &v, int m, int n)
{
    // reverse rows;
    for (int i = 0; i < m; i++)
    {
        reverse(v[i].begin(), v[i].end());
    }
    cout << "after reverse" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << v[i][j] << "\t";
        }
        cout << endl;
    }

    // : transpose:
    for (int i = 0; i < m; i++)
    {
        for (int j = i + 1; j < n; j++)
        {

            swap(v[i][j], v[j][i]);
        }
    }

    cout << "after rotation" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << v[i][j] << "\t";
        }
        cout << endl;
    }
}
int main()
{
    int m, n;
    cout << "enter  no. of rows and cols";
    cin >> m >> n;
    vector<vector<int>> arr(m, vector<int>(n));

    cout << "enter elements";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    anticlockwise(arr, m, n);
    return 0;
}
