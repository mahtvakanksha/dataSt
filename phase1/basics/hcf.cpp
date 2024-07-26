#include <iostream>
using namespace std;

int HCF(int small, int big)
{
    int hcf;
    for (int i = 1; i <= small; i++)
    {
        if (small % i == 0 && big % i == 0)
        {
            hcf = i;
        }
    }
    return hcf;
}

int gcd(int a, int b)
{
    if (b == 0)
        return a;

    return gcd(b, a % b);
}

int sumOfDivisors(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                cout << j << " ";
                sum += j;
                if (j != i / j)
                {
                    cout << i / j << " ";
                    sum += i / j;
                }
            }
        }
        cout << endl;
    }

    return sum;
}

int main()
{
    int n;
    cout << "enter";
    cin >> n;
    int sum = sumOfDivisors(n);
    cout << sum;

    // int a, b;
    // cout << "enter" << endl;
    // cin >> a >> b;
    // int r;
    // if (a > b)
    //     r = HCF(b, a);
    // else
    //     r = HCF(a, b);

    // r = gcd(a, b);

    // cout << r;
    return 0;
}