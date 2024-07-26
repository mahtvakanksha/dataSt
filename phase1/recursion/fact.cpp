#include <iostream>
using namespace std;
int fact(int n)
{
    if (n == 1)
        return 1;
    return n * fact(n - 1);
}
int main()
{

    int n;
    cout << "enter a num";
    cin >> n;
    cout << "fact of num: " << fact(n);
    return 0;
}