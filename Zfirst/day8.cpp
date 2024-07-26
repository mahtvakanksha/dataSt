#include <iostream>
using namespace std;
int power(int num, int pow)
{
    int res = 1;
    for (int i = 1; i <= pow; i++)
    {
        res = res * num;
    }
    return res;
}
bool evenodd(int num)
{
    if (num & 1)
        return 0;
    else
        return 1;
}
int factorial(int num)
{
    int fact = 1;
    for (int i = num; i > 0; i--)
    {
        fact = fact * i;
    }
    return fact;
}
int ncr(int n, int r)
{
    int comb;
    int diff = n - r;
    n = factorial(n);
    r = factorial(r);
    diff = factorial(diff);
    comb = n / (r * diff);
    return comb;
}
int ap_term(int n)
{

    return (3 * n + 7);
}
int setBits(int num)
{
    int count = 0;
    while (num != 0)
    {
        if (num & 1)
        {
            count++;
        }
        num = num >> 1;
    }
    return count;
}

int fibonacci(int index)
{
    int a = 0;
    int b = 1;
    int res;
    int temp;
    for (int i = 3; i <= index; i++)
    {
        res = a + b;
        cout << res << endl;
        a = b;
        b = res;
    }
    return res;
}

int main()
{
    // cout << power(2, 3);
    // int res = evenodd(12);
    // if (res == 0)
    //     cout << "odd";
    // else
    //     cout << "even";

    // int n, r;
    // cout << "enter n and r\n";
    // cin >> n >> r;
    // cout << n << "C" << r << " is equals to:" << ncr(n, r);

    // homework questions:
    // question1:nth term of 3n+7

    // int n;
    // cin >> n;
    // cout << n << "th term: " << ap_term(n);

    // ques 2:no. of setbits in a and b;

    // int a, b;
    // cin >> a >> b;
    // a = setBits(a);
    // b = setBits(b);
    // cout << "total setbits:" << a + b;

    // ques3:fibonacci
    int num;
    cin >> num;
    cout << num << "th value: " << fibonacci(num);

    return 0;
}