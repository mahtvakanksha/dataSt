// setZeroes.cpp
#include <iostream>
#include <vector>
using namespace std;
void markRow(vector<vector<int>> &arr, int i, int cols)
{
    for (int j = 0; j < cols; j++)
    {
        if (arr[i][j] != 0)
        {
            arr[i][j] = -1;
        }
    }
}
void markCol(vector<vector<int>> &arr, int j, int rows)
{
    for (int i = 0; i < rows; i++)
    {
        if (arr[i][j] != 0)
        {
            arr[i][j] = -1;
        }
    }
}
void brute(vector<vector<int>> &arr, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == 0)
            {
                markRow(arr, i, n);
                markCol(arr, j, m);
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == -1)
            {
                arr[i][j] = 0;
            }
        }
    }
    cout << "after zero set";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
void better(vector<vector<int>> &arr, int m, int n)
{
    vector<int> trackRow(m), trackCol(n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == 0)
            {
                trackCol[j] = 1;
                trackRow[i] = 1;
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (trackCol[j] || trackRow[i])
            {
                arr[i][j] = 0;
            }
        }
    }
    cout << "after zero set" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
void optimal(vector<vector<int>> &arr, int m, int n)
{
    // mark first row and col(0th while indexing) 0 if any element in sample matrix is 0(sample matrix is matrix excluding 1st row and first col)
    bool rowFlag = false, colFlag = false;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == 0)
            {
                if (i == 0)
                    rowFlag = true;
                if (j == 0)
                    colFlag = true;
                arr[i][0] = 0;
                arr[0][j] = 0;
            }
        }
    }
    //  replace inner matrix's non zero elements with 0 if any of the associated row or column element is zero
    for (int i = 1; i < m; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (arr[i][j] != 0)
            {
                if (arr[i][0] == 0 || arr[0][j] == 0)
                {
                    arr[i][j] = 0;
                }
            }
        }
    }
    // now make first row zero if rowFlag is set
    if (rowFlag)
    {
        for (int j = 0; j < n; j++)
        {
            arr[0][j] = 0;
        }
    }
    // now make first col zero if colFlag is set
    if (colFlag)
    {
        for (int i = 0; i < m; i++)
        {
            arr[i][0] = 0;
        }
    }

    cout << "after zero set" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int m, n;
    cout << "enter rows and cols";
    cin >> m >> n;
    vector<vector<int>> arr(m, vector<int>(n));
    cout << "enter array elements";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "Original Matrix:\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    optimal(arr, m, n);
    return 0;
}