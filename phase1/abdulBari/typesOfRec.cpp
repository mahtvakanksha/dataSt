#include <iostream>
using namespace std;

void tailRec(int n)
{
    if (n > 0)
    {
        cout << n;
        tailRec(n - 1);
    }
}

void headRec(int n)
{
    if (n > 0)
    {
        headRec(n - 1);
        cout << n;
    }
}

void treeRec(int n)
{
    if (n > 0)
    {
        cout << n << " ";
        treeRec(n - 1);
        treeRec(n - 2);
    }
}

void indirectRec2(int n);
void indirectRec1(int n)
{
    if (n > 0)
    {

        indirectRec2(n - 1);
        cout << n << " ";
    }
}
void indirectRec2(int n)
{
    if (n > 0)
    {
        cout << n << " ";
        indirectRec1(n - 1);
    }
}

int nestedRec(int n) // nested recursion:a function passes itself into itself like an argument
{

    if (n > 0)
    {
        // ERROR 404!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
        return n + nestedRec(nestedRec(n - 1));
    }
}

int main()
{
    int n;
    cout << "enter somethin:" << endl;
    cin >> n;
    // tailRec(n);
    // headRec(n);
    // treeRec(n);
    // indirectRec1(n);
    // cout << nestedRec(n);
    return 0;
}