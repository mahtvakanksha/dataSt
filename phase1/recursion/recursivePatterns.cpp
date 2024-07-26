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
int main()
{
    cout << endl;
    print2(4, 0);
    return 0;
}