#include <iostream>
#include <cmath>
using namespace std;
int helper(int n, int i)
{
    if (n == 0)
        return 0;
    return ((n % 10) * pow(10, i)) + helper(n / 10, i - 1);
}
bool palin(int n)
{
    int dig = floor(log10(n)) + 1;
    int num = helper(n, dig - 1);
    if (num == n)
        return true;
    return false;
}

int main()
{
    int n;
    cout << "enter a num";
    cin >> n;
    cout << palin(n);
    return 0;
}