#include <iostream>
using namespace std;

// parameterized recursion
void printSum(int i, int sum)
{
    if (i < 1)
    {
        cout << sum;
        return;
    }
    printSum(i - 1, sum + i);
}

// functional recursion
int sumN(int n)
{
    if (n == 0)
        return 0;
    return n + sumN(n - 1);
}

// factorial of a number:
int factorial(int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    cout << "enter: ";
    int n;
    cin >> n;
    cout << factorial(n);
    // printSum(n, 0);
    // int sum = sumN(n);
    // cout << "sum: " << sum;
    return 0;
}