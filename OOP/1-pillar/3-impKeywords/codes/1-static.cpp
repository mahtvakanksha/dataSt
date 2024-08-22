#include <iostream>
using namespace std;
class StaticUse
{
    static int a;

public:
    static void staticMemberFunction()
    {
        cout << "inside static member function";

        cout << "The val of static var a : " << a;
    }
};
int StaticUse::a = 0;
// defining static variable outside the class is a must for static variable usage
void staticVarRep()
{
    static int cnt = 0;
    cout << cnt << endl;
    cnt++;
}

int main()
{
    // static varIABLE:
    staticVarRep();
    staticVarRep(); // calling the same function again for a static member wont affect the static member-->updation travels to next function call

    // STATIC MEMBER FUNCTIONS:

    StaticUse::staticMemberFunction();
    return 0;
}