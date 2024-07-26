#include <iostream>
using namespace std;
int main()
{
    // int x = a;
    // cout << x << endl;  throws an error
    int b = 'a';
    // cout << b << endl; // converts it to ASCII of b;
    char ch = '1'; // can assign upto 9 only since char are from 0-9, above this , warning is flashed!and output printed is num%10;
    // cout << ch << endl;
    char c = 250;
    cout << c << "   "; // assumes integer assigned as ASCII adn prints crorrespondng char
}