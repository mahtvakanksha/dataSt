#include <iostream>
using namespace std;
class Constructor
{
private:
    int x;

public:
    // zero argument costructor/default constructor
    Constructor()
    {
        cout << "enter a num";
        cin >> x;
    }
    void display()
    {
        cout << endl
             << x;
    }
};

int main()
{
    Constructor c;
    c.display();
    return 0;
}