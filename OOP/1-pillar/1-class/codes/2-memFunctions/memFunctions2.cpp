#include <iostream>
using namespace std;
class memFunctions2
{
private:
    int x = 10; // initialization is fine only in cpp11 and later versions else outside the class
    const int y = 30;

public:
    void simpleFunction()
    {
        cout << x + 10 << " ";
        // y = y + 10; a const member function can never be modified
        cout << y + 10;
    }
    void constFn() const
    {
        // x += 10; you can not modify any data member inside const function, since const member function ensures that it doesnt modify the state of an object
        cout << x + 10 << " ";
        // y = y + 10; // and same for this
        cout << y;
    }
};

int main()
{
    memFunctions2 obj;
    // obj.constFn(); // can access both const and non const vars
    obj.simpleFunction();
    return 0;
}