#include <iostream>
using namespace std;
class Constructor
{
private:
    int x, y;

public:
    //  Constructor(int m, int n)
    // {
    //     x = m + 10;
    //     y = n + 20;
    // }
    Constructor(int m, int n) : x(m), y(n){};
    void display()
    {
        cout << endl
             << x << " " << y;
    }
};

int main()
{
    Constructor c(10, 20);
    c.display();
    return 0;
}