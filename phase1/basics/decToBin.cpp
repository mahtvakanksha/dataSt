#include <iostream>
#include <math.h>
using namespace std;

// approach:using int as input;
void decToBin(int dec)
{
    int mask;
    for (int i = 31; i >= 0; i--)
    {
        mask = 1 << i;
        int bin = ((mask & dec) ? 1 : 0);
        cout << bin;
        if (i % 4 == 0)
            cout << " ";
    }
    cout << endl;
}

// using int as input
void binToDec(int bin)
{
    int dec = 0;
    int i = 0;
    while (bin > 0)
    {
        if (bin & 1)
            dec = dec + pow(2, i);
        i++;
        bin = bin / 10;
    }
    cout << dec;
}

int main()
{
    int dec, bin;
    cout << "enter a number ";
    // cin >> dec;
    // cout << "binary equivalent :" << endl;
    // decToBin(dec);

    // cin >> bin;
    // cout << "decimal equivalent:" << endl;
    // binToDec(bin);

    return 0;
}