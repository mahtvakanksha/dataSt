#include <iostream>
using namespace std;
void print1(int n)
{
    if (n == 0)
        return;
    for (int i = 0; i < n; i++)
    {
        cout << "* ";
    }
    cout << endl;
    print1(n - 1);
}
void print2(int r, int c)
{
    if (r == 0)
        return;
    if (c < r)
    {
        cout << "* ";
        print2(r, c + 1);
    }
    else
    {
        cout << endl;
        print2(r - 1, 0);
    }
}
void print3(int r, int c)
{
    if (r == 0)
        return;
    if (c < r)
    {
        print3(r, c + 1);
        cout << "* ";
    }
    else
    {
        print3(r - 1, 0);
        cout << endl;
    }
}
int main()
{
    cout << endl;
    print3(4, 0);
    return 0;
}