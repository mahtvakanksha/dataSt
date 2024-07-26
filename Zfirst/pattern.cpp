#include <iostream>
using namespace std;

int main()
{
    /*char ch;
    cout << "enter a character";
    cin >> ch;
    if (ch >= 65 && ch <= 90)
    {
        cout << "an upper case character";
    }
    else if (ch >= 97 && ch <= 112)
    {
        cout << " a lower case character";
    }
    else
    {
        cout << "numeric in nature";
    }

    */

    // priniting from 1 to n;
    /*int n;
    cout << "enter a number" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << i << endl;
    }*/

    /*int i = 1, n;
     cout << "enter a number" << endl;
     cin >> n;
     while (i <= n)
     {
         cout << i << endl;
         i++;
     }*/
    /*int i = 1, n;
    cout << "enter a number" << endl;
    cin >> n;

    do
    {
        cout << i << endl;
        i++;
    } while (i >= n);*/

    /* int n, sum = 0;
     cout << "enter a number" << endl;
     cin >> n;
     for (int i = 1; i <= n; i++)
     {
         sum = sum + i;
         }
     cout << sum << endl;
     return 0;*/

    // print sum of all even numbers bw 1 to n
    /* int i, n, sum = 0;
     cout << "enter a number" << endl;
     cin >> n;
     for (i = 1; i <= n; i++)
     {
         if (i % 2 == 0)
         {
             sum = sum + i;
         }
         else
             continue;
     }
     cout << "the sum is: " << sum;*/

    // conversion from Celsius to fahrenhite;
    /*int c, f;
    cout << "enter a temperature in celsius" << endl;
    cin >> c;
    f = (c * 9 / 5) + 32;
    cout << f;
*/

    // prime number

    /* int n, i, flag = 0;
     cout << "enter a number" << endl;
     cin >> n;
     for (i = 2; i < n; i++)
     {
         if (n % i == 0)
         {
             flag = 1;
         }
         else
             continue;
     }
     if (flag == 1)
     {
         cout << "not prime";
     }
     else
     {
         cout << "prime number";
     }*/

    // list all the prime numbers between 1 to n

    /*int i, j, n, num, flag = 0;
    cout << "enter a number for range" << endl;
    cin >> n;

    for (i = 3; i <= n; i++)
    {
        num = i;
        for (j = 2; j < num; j++)
        {
            if (num % j == 0)
            {
                flag = 1;
                break;
            }
            else
                flag = 0;
        }
        if (flag == 1)
        {
            cout << num << " : not prime number" << endl;
        }
        else
            cout << num << " :  a prime number" << endl;
    }*/

    // patterns

    /****
    ***
    ***

   int rows, i = 1, j;
   cout << "enter a number" << endl;
   cin >> rows;
   j = rows;
   while (j != 0)
   {
       i = 1;
       while (i <= rows)
       {
           cout << "*";
           i++;
       }
       cout << endl;
       j--;
   }*/

    //    111
    //    222
    //    333

    /*int i, j, rows;
    cout << "enter number of rows" << endl;
    cin >> rows;
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j < rows; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }*/

    // 1234
    // 1234
    // 1234
    // 1234

    /*int i, j;
    int rows;
    cout << "enter number of rows" << endl;
    cin >> rows;
    for (i = 0; i < rows; i++)
    {
        for (j = 1; j <= rows; j++)
        {
            cout << j;
        }
        cout << endl;
    }*/

    // 4321
    // 4321
    // 4321
    // 4321

    /* int i, j;
     int rows;
     cout << "enter number of rows" << endl;
     cin >> rows;
     for (i = 0; i < rows; i++)
     {
         for (j = rows; j > 0; j--)
         {
             cout << j;
         }
         cout << endl;
     }*/

    //  123
    //  456
    //  789

    /* int i, j, rows;
     cout << "enter number of rows" << endl;
     cin >> rows;
     int n = 1;
     for (i = 1; i <= rows; i++)
     {
         for (j = 1; j <= rows; j++)
         {
             cout << n << " ";
             n++;
         }
         cout << endl;
     }*/

    //  *
    //  **
    //  ***

    /*int i, j = 1, rows;
    cout << "enter number of rows" << endl;
    cin >> rows;
    for (i = 1; i <= rows; i++)
    {
        j = 1;
        while (j <= i)
        {
            cout << "*";
            j++;
        }
        cout << endl;
    }*/

    // 1
    // 23
    // 456

    /*int i, j, rows, n;
    cout << "enter number of rows" << endl;
    cin >> rows;
    n = 1;
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << n;
            n++;
        }
        cout << endl;
    }*/

    // 1
    //  22
    //  333

    /*int i, j, rows;
    cout << "enter number of rows" << endl;
    cin >> rows;
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }*/

    // 1
    // 23
    // 345
    // 4567
    /*  int i, j, rows;
      cout << "enter number of rows" << endl;
      cin >> rows;

      for (i = 1; i <= rows; i++)
      {
          for (j = 1; j <= i; j++)
          {
              cout << i + j - 1;
          }
          cout << endl;
      }
  */

    //  1
    //  21
    //  3212
    //  4321

    /* int i, j, rows;
     cout << "enter number of rows" << endl;
     cin >> rows;

     for (i = 1; i <= rows; i++)
     {
         for (j = i; j > 0; j--)
         {
             cout << j;
         }
         cout << endl;
     }*/

    // AAA
    // BBB
    //  CCC

    /*int i, j, rows;
    char ch = 'A';
    cout << "enter number of rows" << endl;
    cin >> rows;
    for (i = 1; i <= rows; i++)
    {

        for (j = 1; j <= rows; j++)
        {
            cout << ch;
        }
        cout << endl;
        ch++;
    }*/

    // ABC
    // ABC
    // ABC

    /*  int i, j, rows;

      cout << "enter number of rows" << endl;
      cin >> rows;
      for (i = 1; i <= rows; i++)
      {
          char ch = 'A';
          for (j = 1; j <= rows; j++)
          {
              cout << ch;
              ch++;
          }
          cout << endl;
      }*/

    // ABC
    // DEF
    // GHI

    /* int i, j, rows;
     cout << "enter number of rows" << endl;
     cin >> rows;
     char ch = 'A';
     for (i = 1; i <= rows; i++)
     {

         for (j = 1; j <= rows; j++)
         {
             cout << ch;
             ch++;
         }
         cout << endl;
     }*/

    // ABC
    // BCD
    // CDE

    /*  re do,still not able to grasp logic in a go.


    int i, j, rows;
     cout << "enter number of rows" << endl;
     cin >> rows;
     for (i = 1; i <= rows; i++)
     {

         for (j = 1; j <= rows; j++)
         {
             char b = 'A' + j + i - 2;
             cout << b;
         }
         cout << endl;
     }*/

    return 0;
}