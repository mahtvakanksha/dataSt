#include <iostream>
using namespace std;
int sumOfNEle(int n)
{
    if (n > 0)
    {
        return n + sumOfNEle(n - 1);
    }
    return 0;
}
int pow(int num, int p)
{
    if (p == 1)
        return num;
    return num * pow(num, p - 1);
}
int taylorSeries(int x, int n)
{
    static double p = 1, f = 1;
    if (n == 0)
        return 1;
    else
    {
        int r = taylorSeries(x, n - 1);
        p = x * p;
        f = f * n;
        return r + p / f;
    }
}
int F[10];
int fibMemoization(int n)
{
    if (n <= 1)
        return n;
    else
    {
        if (F[n - 2] == -1)
            F[n - 2] = fibMemoization(n - 2);
        if (F[n - 1] == -1)
            F[n - 1] = fibMemoization(n - 1);
        return F[n - 2] + F[n - 1];
    }
}
int nCr(int n, int r)
{
    if (r == 0 || r == n)
        return 1;
    return nCr(n - 1, r - 1) + nCr(n - 1, r);
}
void towerOfHanoi(int n, string S, string h, string D)
{
    if (n == 1)
    {
        cout << "transfer disk from " << S << " to " << D << endl;
    }
    else
    {
        towerOfHanoi(n - 1, S, D, h);
        cout << "transfer disk from " << S << " to " << D << endl;
        towerOfHanoi(n - 1, h, S, D);
    }
}
int main()
{

    int n, r;
    cin >> n;
    towerOfHanoi(n, "S", "H", "D");
    // cin >> r;
    // cout << nCr(n, r);

    // cout << sumOfNEle(n);

    // cin >> p;
    // cout << pow(n, p);

    // cout << taylorSeries(1, 4);

    // for (int i = 0; i < n; i++)
    // {
    //     F[i] = -1;
    // }
    // cout << fibMemoization(n);
    return 0;
}