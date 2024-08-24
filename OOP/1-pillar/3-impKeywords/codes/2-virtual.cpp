#include <iostream>
using namespace std;
class Base
{
public:
    virtual void print()
    {
        cout << "print of base class" << endl;
    }

    void show()
    {
        cout << "show of base class" << endl;
    }
};
class Derived : public Base
{
public:
    void print()
    {
        cout << "print of derived class" << endl;
    }

    void show()
    {
        cout << "show of derived class" << endl;
    }
};
int main()
{
    Base *bptr;
    //  Runtime polymorphism is achieved only through a pointer (or reference) of the base class type. Also, a base class pointer can point to the objects of the base class as well as to the objects of the derived class.
    Derived d;
    bptr = &d;
    bptr->print();
    bptr->show();
    return 0;
}