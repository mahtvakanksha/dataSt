#include <iostream>
using namespace std;
int add(int x, int y)
{
    int c = x + y;
    return (c);
}
int main()
{
    int x, y;
    cin >> x >> y;
    int z = add(x, y);
    cout << z;
    return 0;
}