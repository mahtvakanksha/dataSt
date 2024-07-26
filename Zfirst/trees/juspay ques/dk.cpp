#include <bits/stdc++.h>
using namespace std;

int findMinNode(int *weight, bool *visited, int n)
{
    int minIndex = -1;
    for (int i = 0; i < n; i++)
    {
        if (!visited[i] && (minIndex == -1 || weight[i] < weight[minIndex]))
        {
            minIndex = i;
        }
    }
    return minIndex;
}

int primMST(vector<vector<int>> &city, int n)
{
    int weight[n];
    bool visited[n];
    int parent[n];
    for (int i = 0; i < n; i++)
    {
        weight[i] = INT_MAX;
        visited[i] = false;
    }
    parent[0] = -1;
    weight[0] = 0;
    for (int i = 1; i <= n - 1; i++)
    {
        int minNode = findMinNode(weight, visited, n);
        visited[minNode] = true;
        for (int j = 0; j < n; j++)
        {
            if (city[minNode][j] > 0 && !visited[j])
            {
                if (city[minNode][j] < weight[j])
                {
                    weight[j] = city[minNode][j];
                    parent[j] = minNode;
                }
            }
        }
    }
    int ans = 0;
    for (int i = 1; i < n; i++)
    {
        ans += weight[i];
    }
    return ans;
}

int main()
{
    int n = 5;

    vector<vector<int>> city = {
        {0, 6, 2, 1, 0},
        {6, 0, 5, 0, 0},
        {2, 5, 0, 4, 3},
        {1, 0, 4, 0, 0},
        {0, 0, 3, 0, 0}};

    int minCost = primMST(city, n);
    cout << "The minimum cost to connect all cities = " << minCost << endl;
}