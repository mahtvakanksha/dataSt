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
void print1(int r, int c)
{
}
int main()
{
    cout << endl;
    print1(4);
    return 0;
}