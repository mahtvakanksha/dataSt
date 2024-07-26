#include <iostream>
using namespace std;
int helper(int n, int cnt)
{
    if (n == 0)
    {
        return cnt;
    }
    if (n % 10 == 0)
        return helper(n / 10, cnt + 1);
    return helper(n / 10, cnt);
}
int count(int n)
{
    int cnt = 0;
    return helper(n, cnt);
}

int main()
{
    cout << "enter a num";
    int n;
    cin >> n;
    cout << count(n);
    return 0;
}