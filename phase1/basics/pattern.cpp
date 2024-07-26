#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter n" << endl;
    cin >> n;

    /*

        ****
        ****
        ****

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }*/

    /* int i = 0;
     while (i < n)
     {
         int j = 0;
         while (j < n)
         {
             cout << "*";
             j += 1;
         }
         cout << endl;
         i += 1;
     }
     return 0;
     */

    /*

    1111
    2222
    3333

    */

    /*
    int i = 1;
    while (i <= n)
    {
        int j = 0;
        while (j < n)
        {
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }
    */

    /*
        1234
        1234
        1234
    */
    /*
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << j;
            j++;
        }
        cout << endl;
        i++;
    }
    */
    /*

        321
        321
        321

        int i = 1;
        while (i <= n)
        {
            int j = 3;
            while (j > 0)
            {
                cout << j;
                j--;
            }
            cout << endl;
            i++;
        }

    */

    /*
    123
    456
    789
        int i = 1;
        while (i <= n)
        {
            int j = 1;
            while (j <= n)
            {
                cout << j + (n * (i - 1));
                j++;
            }
            cout << endl;
            i++;
        }
    /*
        *
        **
        ***

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
    */
    /*
    1
    22
    333
    4444
     int i = 1;
        while (i <= n)
        {
            int j = 1;
            while (j <= i)
            {
                cout << i;
                j++;
            }
            cout << endl;
            i++;
        }
    /*
    1
    2 3
    4 5 6
    7 8 9 10

    int count = 1;
    int i = 1;
    while (i <= n)
    {

        int j = 1;
        while (j <= i)
        {
            cout << count << " ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
    */
    /*1
    2 3
    3 4 5
    4 5 6 7
    int i = 1;
        while (i <= n)
        {
            int count = i;
            int j = 1;
            while (j <= i)
            {
                cout << count << " ";
                count++;
                j++;
            }
            cout << endl;
            i++;
        }
    */

    /*
    1
    21
    321
    4321

    int i = 1;
        while (i <= n)
        {

            int j = i;
            while (j > 0)
            {
                cout << j;
                j--;
            }
            cout << endl;
            i++;
        }

    */
    /*

    AAA
    BBB
    CCC

     char ch = 'A';
        int i = 1;
        while (i <= n)
        {

            int j = 1;
            while (j <= n)
            {
                cout << ch;

                j++;
            }
            ch++;
            cout << endl;
            i++;
        }
    */
    /*

    ABC
    ABC
    ABC
     int i = 1;
        while (i <= n)
        {
            char ch = 'A';
            int j = 1;
            while (j <= n)
            {
                cout << ch;
                ch++;
                j++;
            }

            cout << endl;
            i++;
        }
    */
    /*

    ABC
 DEF
 GHI

 char ch = 'A';
     int i = 1;
     while (i <= n)
     {

         int j = 1;
         while (j <= n)
         {
             cout << ch;
             ch++;
             j++;
         }

         cout << endl;
         i++;
     }
    */
    /*
    ABC
    BCD
    CDE

    int i = 1;
        while (i <= n)
        {
            char ch = 'A' + (i - 1);
            int j = 1;
            while (j <= n)
            {
                cout << ch;
                ch++;
                j++;
            }

            cout << endl;
            i++;
        }
    */

    /*

    A
    BB
    CCC

    char ch = 'A';
        int i = 1;
        while (i <= n)
        {

            int j = 1;
            while (j <= i)
            {
                cout << ch;

                j++;
            }
            ch++;
            cout << endl;
            i++;
        }
    */
    /*
    A
    BC
    DEF

    char ch = 'A';
        int i = 1;
        while (i <= n)
        {

            int j = 1;
            while (j <= i)
            {
                cout << ch;
                ch++;
                j++;
            }

            cout << endl;
            i++;
        }
    */
    /*
    D
    CD
    BCD
    ABCD

    int i = 1;
        while (i <= n)
        {
            char ch = 'A' + (n - i);
            int j = 1;
            while (j <= i)
            {
                cout << ch;
                ch++;
                j++;
            }

            cout << endl;
            i++;
        }
    */

    /*
       *
      **
     ***
    ****
    int i = 1;
        while (i <= n)
        {

            int j = 1;
            while (j <= n)
            {
                if (j <= n - i)
                    cout << " ";
                else
                    cout << "*";
                j++;
            }

            cout << endl;
            i++

    */
    /*
    ****
    ***
    **
    *

     int i = 1;
        while (i <= n)
        {

            int j = n - i + 1;
            while (j > 0)
            {

                cout << "*";

                j--;
            }

            cout << endl;
            i++;
        }
    */
    /*
    ****
     ***
      **
       *

     int i = 1;
        while (i <= n)
        {

            int j = 1;
            while (j <= n)
            {
                if (j < i)
                    cout << " ";
                else
                    cout << "*";
                j++;
            }

            cout << endl;
            i++;
        }
    */

    /*
       1
      121
     12321
    1234321

     * /

        int i = 1;
        while (i <= n)
        {

            int space = n - i;
            // print space
            while (space)
            {
                cout << " ";
                space--;
            }

            // print j
            int j = 1;
            while (j <= i)
            {
                cout << j;
                j++;
            }

            // print rev
            int rev = i - 1;
            while (rev)
            {
                cout << rev;
                rev--;
            }
            cout << endl;
            i++;
        }
        */

    int i = 1;
    //     while (i <= n)
    //     {

    //         int fwd =1;
    //         // print space
    //         while (fwd<n-i+1)
    //         {
    //             cout <<fwd;
    //             fwd++;
    //         }

    //         // print j
    //         int j = i-1;
    //         while (j >1)
    //         {
    //             cout << "*";
    //             j--;
    //         }

    while (i <= n)
    {
        int j = 1;
        while (j <= n - i + 1)
        {
            cout << j;
            j++;
        }
        int star1 = i - 1;
        while (star1)
        {
            cout << "*";
            star1--;
        }
        int star2 = i - 1;
        while (star2)
        {
            cout << "*";
            star2--;
        }
        int k = n - i + 1;
        while (k)
        {
            cout << k;
            k--;
        }

        cout << endl;
        i++;
    }

    //         // print rev
    //         int rev = i - 1;
    //         while (rev)
    //         {
    //             cout << rev;
    //             rev--;
    //         }
    //         cout << endl;
    //         i++;
    //     }
}