#include <iostream>
using namespace std;
class b
{
public:
    b()
    {
        cout << "Constructing base \n";
    }
    virtual ~b()
    {
        cout << "Destructing base \n";
    }
};
class d : public b
{
public:
    d()
    {
        cout << "Constructing derived \n";
    }
    ~d()
    {
        cout << "Destructing derived \n";
    }
};
int main(void)
{
    // creating object through heap allocation
    d *derived = new d();
    b *bptr = derived; // Since d is derived from b, a pointer to d can be assigned to a pointer to b. This is known as upcasting.The assignment b *bptr = derived; converts the pointer of type d* to a pointer of type b*.

    delete bptr;
    // it deletes the object pointed by bptr(which points to b,i.e destructor of base class will be called. BUT since the destructor of b is virtual, the derived class destructor is executed before destructor of b class)
    return 0;
}