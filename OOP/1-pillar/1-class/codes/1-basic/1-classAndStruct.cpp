#include <iostream>
using namespace std;

// syntax of a structure:
struct Test
{
    int x;
};
class classAndStruct
{
private:
    int x; // this can't be accessed outside this class, doing so will through an error
public:
    int y;
};

int main()
{
    Test t; // t is a value type variable which contains all the data of a structure
    t.x = 20;
    cout << t.x;

    classAndStruct obj; // obj is a refernce type object which refernces to the class
    obj.y = 100;
    cout << obj.y;
    return 0;
}