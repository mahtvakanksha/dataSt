// rev
#include <iostream>
#include <cmath>
using namespace std;
int helper(int n, int i)
{
    if (n == 0)
        return 0;
    return (n % 10) * pow(10, i) + helper(n / 10, i - 1);
}
int rev(int n)
{
    int dig = floor(log10(n)) + 1;
    return helper(n, dig - 1);
}

int main()
{

    int n;
    cout << "enter a num";
    cin >> n;
    cout << "rev of num: " << rev(n);
    return 0;
}