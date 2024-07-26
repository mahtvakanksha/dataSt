#include <iostream>
using namespace std;
class memFunctions1
{
private:
    int x = 10; // initialization is fine only in cpp11 and later versions else outside the class

    static int y; // static members must be initialized outside the class definition

public:
    // a simple member function
    void show()
    {
        cout << x;
        cout << y; // we can access even the static members in non static member function
    }
    // static member function: can only access static data members only, and these data members must be initialized outside the class using ::(scope resolution)
    static void staticshow()
    {
        cout << "the val is " << y + 10;
    }
};
int memFunctions1::y = 10;
int main()
{
    memFunctions1 obj;
    obj.show();
    // memFunctions1::staticshow(); // static member function
    // this can't print since staticshow can only access static members
    // memFunctions1::staticshow();
    return 0;
}