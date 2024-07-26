#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "ente";
    cin >> n;
    // int i = 1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << "*";
    //         j++;
    //     }
    //     i++;
    //     cout << endl;
    // }

    // i = 1;
    // while (i <= n)
    // {
    //     int k = 1;
    //     while (k < n - i + 1)
    //     {
    //         cout << "*";
    //         k++;
    //     }
    //     i++;
    //     cout << endl;
    // }

    // int i = 1;
    // int start;

    // while (i <= n)
    // {
    //     int j = 1;
    //     if (i % 2 == 0)
    //         start = 0;
    //     else
    //         start = 1;
    //     while (j <= i)
    //     {
    //         cout << start;
    //         start = 1 - start;
    //         j++;
    //     }
    //     i++;
    //     cout << endl;
    // }

    // int i = 1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << j;
    //         j++;
    //     }
    //     int space = 1;
    //     while (space < n - i + 1)
    //     {
    //         cout << "*";
    //         space++;
    //     }

    //     int space1 = 1;
    //     while (space1 <= n - i)
    //     {
    //         cout << "*";
    //         space1++;
    //     }
    //     int k = n;
    //     while (k > 0)
    //     {
    //         if (k == i || k < i)
    //             cout << k;
    //         k--;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // int i = 1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     char ch = 'A';

    //     while (j <= n)
    //     {
    //         if (j <= n - i)
    //         {
    //             cout << " ";
    //         }
    //         else
    //         {
    //             cout << ch;
    //             ch++;
    //         }
    //         j++;
    //     }
    //     int k = 1;
    //     char ch2 = 'A' + i - 2;
    //     while (k <= i - 1)
    //     {
    //         cout << ch2;
    //         ch2--;
    //         k++;
    //     }
    //     i++;
    //     cout << endl;
    // }

    // int i = 1;
    // while (i <= n)
    // {
    //     // first triangle
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         if (j <= n - i + 1)
    //         {
    //             cout << "*";
    //         }
    //         else
    //             cout << " ";
    //         j++;
    //     }

    //     // second triangle
    //     int k = 1;
    //     while (k <= n)
    //     {
    //         if (k >= i && k <= n)
    //             cout << "*";
    //         else
    //             cout << " ";
    //         k++;
    //     }

    //     i++;
    //     cout << endl;
    // }

    // int a = 1;
    // while (a <= n)
    // {
    //     // third triangle

    //     int x = 1;
    //     while (x <= n)
    //     {
    //         if (x <= a)
    //             cout << "*";
    //         else
    //             cout << " ";
    //         x++;
    //     }
    //     // fourth triangle
    //     int y = 1;
    //     while (y <= n)
    //     {
    //         if (y <= n - a)
    //             cout << " ";
    //         else
    //             cout << "*";
    //         y++;
    //     }
    //     a++;
    //     cout << endl;
    // }
    // another starts
    //  int a = 1;
    //  while (a <= n)
    //  {
    //      // third triangle

    //     int x = 1;
    //     while (x <= n)
    //     {
    //         if (x <= a)
    //             cout << "*";
    //         else
    //             cout << " ";
    //         x++;
    //     }
    //     // fourth triangle
    //     int y = 1;
    //     while (y <= n)
    //     {
    //         if (y <= n - a)
    //             cout << " ";
    //         else
    //             cout << "*";
    //         y++;
    //     }
    //     a++;
    //     cout << endl;
    // }
    // int i = 1;
    // while (i <= n)
    // {
    //     // first triangle
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         if (j < n - i + 1)
    //         {
    //             cout << "*";
    //         }
    //         else
    //             cout << " ";
    //         j++;
    //     }

    //     // second triangle
    //     int k = 1;
    //     while (k <= n)
    //     {
    //         if (k > i && k <= n)
    //             cout << "*";
    //         else
    //             cout << " ";
    //         k++;
    //     }

    //     i++;
    //     cout << endl;
    // }

    // another
    // int i = 1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         if ((i == 1 || j == 1) || (i == n || j == n))
    //             cout << "*";
    //         else
    //             cout << " ";
    //         j++;
    //     }
    //     i++;
    //     cout << endl;
    // }

    // int i = 1;
    // int val = n;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         if ((i == 1 || j == 1) || (i == n || j == n))

    //             j++;
    //     }
    //     i++;
    //     cout << endl;
    // }
    int top, bottom, left, right;
    int mini;
    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            top = i;
            left = j;
            bottom = (2 * n - 2) - i;
            right = (2 * n - 2) - j;
            mini = min(min(top, bottom), min(left, right));
            cout << n - mini;
        }
        cout << endl;
    }
    return 0;
}
