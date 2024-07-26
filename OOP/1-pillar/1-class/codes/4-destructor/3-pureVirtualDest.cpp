#include <iostream>
using namespace std;
class base
{
    // base class is abstract, you can not create direct instances of base class
public:
    virtual ~base() = 0; // pure virtual destructor
};
base::~base()
{
    cout << "hi from base";
}
class derived : public base
{
public:
    ~derived()
    {
        cout << "hi from derived";
    }
};
int main()
{
    base *obj = new derived(); // A pointer to the Base class is used to create an instance of the Derived class
    delete obj;                // Deleting the obj pointer ensures that the destructors for both Derived and Base are called in the correct order.
    return 0;
}