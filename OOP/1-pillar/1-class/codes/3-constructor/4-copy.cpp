#include <iostream>
using namespace std;
class Constructor
{
private:
    int x, y;

public:
    Constructor()
    {
        x = 32;
        y = 31;
    }
    Constructor(Constructor &obj)
    {
        x = obj.x + 10;
        y = obj.y + 20;
    }
    void display()
    {
        cout << x << y;
    }
};

int main()
{
    Constructor c;
    Constructor newC(c); // Constructor newC=c;
    newC.display();
    return 0;
}