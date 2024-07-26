#include <iostream>
using namespace std;

void diffCurrency(int curr)
{
    int hundred, fifty, twenty, ones;
    // since we wanted to calculate
    // values of all the notes, so we used switch case w/o
    // break
    // curr=1330(let)
    switch (1)
    {
    case 1:
        hundred = curr / 100;
        curr = curr % 100;
        cout << "hundred: " << hundred << endl;
        // after checking the value of 100rs notes, now
        // it will check ruppees further
        // note that currency is now 30(from remainder)
    case 2:
        fifty = curr / 50;
        curr = curr % 50;
        cout << "fifty: " << fifty << endl;
    case 3:
        twenty = curr / 20;
        curr = curr % 20;
        cout << "twenty: " << twenty << endl;
    case 4:
        ones = curr / 1;
        curr = curr % 1;
        cout << "ones: " << ones << endl;
    }
}

int fact(int x)
{
    int fact = 1;
    for (int i = x; i > 1; i--)
    {
        fact = fact * i;
    }

    return fact;
}

int nthTerm(int n)
{
    return 3 * n + 7;
}

int setBits(int a)
{
    int count = 0;
    while (a != 0)
    {
        if (a & 1)
            count++;
        a = a >> 1;
    }
    return count;
}

int ncr(int n, int r)
{
    int ans;
    // approach 1:
    //  int factN, factR, factNR;
    //  factN = fact(n);
    //  factR = fact(r);
    //  factNR = fact(n - r);
    //  ans = (factN / (factR * factNR));

    // appraoch2:
    int num = fact(n);
    int denom = fact(r) * fact(n - r);
    ans = num / denom;
    return ans;
}

void pattern(int n)
{
    int i = 1;

    while (i <= n)
    {
        int j = 1;
        char ch = 'A' + i - 1;
        while (j <= i)
        {
            cout << ch;
            j++;
        }

        i++;
        cout << endl;
    }
}

bool isprime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{

    // cout << "enter the value of currency:";
    // int curr;
    // cin >> curr;
    // diffCurrency(curr);

    // cout << "enter the value:";
    // int n, r;
    // cin >> n >> r;
    // int ans = ncr(n, r);
    // cout << ans;

    // int n;
    // cout << "enter n: ";
    // cin >> n;
    // cout << isprime(n);

    // cout << "enter the value of n:";
    // int n;
    // cin >> n;
    // int term = nthTerm(n);
    // cout << term;
    // pattern(3);

    // cout << "enter:";
    // int a, b;
    // cin >> a >> b;
    // cout << (setBits(b) + setBits(a));
    return 0;
}