#include <iostream>
#include <math.h>
using namespace std;

void displayBits(int x)
{
    int mask;
    for (int i = 31; i >= 0; i--)
    {
        mask = 1 << i;
        cout << ((mask & x) ? 1 : 0);
        if (i % 4 == 0)
            cout << " ";
    }
    cout << endl;
}

void negComplement(int x)
{
    // convert absolute value to binary:
    displayBits(x);

    displayBits(~abs(x) + 1);
}

int main()
{
    cout << "enter a number";
    int n;
    cin >> n;
    // displayBits(n);

    // cout << "one's complement:" << endl;
    // displayBits(~abs(n));

    // cout << "twos complement:" << endl;
    // displayBits(~abs(n) + 1);

    negComplement(abs(n));

    return 0;
}