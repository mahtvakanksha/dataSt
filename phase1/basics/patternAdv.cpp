#include <iostream>
using namespace std;

void pattern1(int n)
{
    /*

     * * * * * * * * * *
     * * * *     * * * *
     * * *         * * *
     * *             * *
     *                 *
     *                 *
     * *             * *
     * * *         * * *
     * * * *     * * * *
     * * * * * * * * * *

     */
    int i = 1;
    while (i <= n)
    {
        // first triangle:
        int j = 1;
        while (j <= n)
        {
            if (j <= n - i + 1)

                cout << "* ";

            else
                cout << "  ";
            j++;
        }
        // second triangle:
        int k = 1;
        while (k <= n)
        {
            if (k < i)
                cout << "  ";
            else
                cout << "* ";
            k++;
        }

        i++;
        cout << endl;
    }
    int a = 1;
    while (a <= n)
    {
        // third triangle:
        int b = 1;
        while (b <= n)
        {
            if (b <= a)
                cout << "* ";
            else
                cout << "  ";
            b++;
        }

        // fourth triangle:
        int c = 1;
        while (c <= n)
        {
            if (c < n - a + 1)

                cout << "  ";

            else
                cout << "* ";
            c++;
        }
        a++;
        cout << endl;
    }
}

void pattern2(int n)
{
    /*

*                 *
* *             * *
* * *         * * *
* * * *     * * * *
* * * * * * * * * *
* * * * * * * * * *
* * * *     * * * *
* * *         * * *
* *             * *
*                 *

    */
    int a = 1;
    while (a <= n)
    {
        // third triangle:
        int b = 1;
        while (b <= n)
        {
            if (b <= a)
                cout << "* ";
            else
                cout << "  ";
            b++;
        }

        // fourth triangle:
        int c = 1;
        while (c <= n)
        {
            if (c < n - a + 1)

                cout << "  ";

            else
                cout << "* ";
            c++;
        }
        a++;
        cout << endl;
    }
    int i = 1;
    while (i <= n)
    {
        // first triangle:
        int j = 1;
        while (j <= n)
        {
            if (j <= n - i + 1)

                cout << "* ";

            else
                cout << "  ";
            j++;
        }
        // second triangle:
        int k = 1;
        while (k <= n)
        {
            if (k < i)
                cout << "  ";
            else
                cout << "* ";
            k++;
        }

        i++;
        cout << endl;
    }
}

void pattern3(int n)
{

    //  \*******/
    //  *\*****/*
    //  **\***/**
    //  ***\*/***
    //  ****/****
    //  ***/*\***
    //  **/***\**
    //  */*****\*
    //  /*******\


    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            if (i == j || i + j == (n + 1))
            {
                if (i + j == n + 1)
                    cout << "/";
                else
                    cout << "\\";
            }
            else
                cout << "*";
            j++;
        }
        i++;
        cout << endl;
    }
}

void pattern4(int n)
{
    /*

76543210
6543210
543210
43210
3210
210
10
0

    */
    int i = 1;

    while (i <= n)
    {
        int j = n - i;
        while (j >= 0)
        {
            cout << j;
            j--;
        }
        i++;
        cout << endl;
    }
}

void pattern5(int n)
{
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << ;
            j++;
        }
        i++;
        cout << endl;
    }
}
int main()
{
    cout << "enter:";
    int n;
    cin >> n;
    pattern5(n);
    return 0;
}