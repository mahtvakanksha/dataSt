#include <iostream>
#include <vector>
using namespace std;

// one parameter
void printNTimes1(int n)
{
    if (n == 0)
        return;
    cout << "hello ";
    printNTimes1(n - 1);
}

// two parameter
void printNTimes2(int n, int i)
{
    if (i > n)
        return;
    cout << "world ";
    printNTimes2(n, i + 1);
}

// one parameter-->1 to N print
vector<int> printUptoN1(int n)
{
    if (n == 0)
        return {}; // list initialization or uniform initialization
    vector<int> a = printUptoN1(n - 1);
    a.push_back(n);
    return a;
}

// two parameter-->1 to N print
vector<int> printUptoN2(int n, int i)
{
    if (n < i)
        return {}; // list initialization or uniform initialization
    vector<int> a = printUptoN2(n, i + 1);
    a.push_back(n - i + 1);
    return a;
}

// parameter two-backtrack recursion:
vector<int> printUptoN3(int n, int i)
{
    if (i == 0)
        return {};
    vector<int> a = printUptoN3(n, i - 1);
    a.push_back(i);
    return a;
}

// 1 to N backrtack,one parameter:
vector<int> printUptoN4(int n)
{
    if (n == 0)
        return {};
    vector<int> a = printUptoN4(n - 1);
    a.push_back(n);
    return a;
}

// print from N to 1,using backtrack:
vector<int> printFromN(int n, int i)
{
    if (i > n)
        return {};
    vector<int> a = printFromN(n, i + 1);
    a.push_back(i);
    return a;
}

int main()
{
    int n, i = 1, j = 5; // j is for backtrack
    cout << "enter: ";
    cin >> n;
    vector<int> v;

    // v = printUptoN3(n, j); // i in decreasing order-->max
    // v = printUptoN4(n);
    v = printFromN(n, i);
    for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
        cout << *it << " ";

    return 0;
    // v = printUptoN1(n);
    // v = printUptoN2(n, i);

    // printNTimes1(n);same
    // printNTimes2(n, i);
}

// after navigating to present folder :g++ -std=c++11 rec1.cpp -o rec1 and then ./rec1