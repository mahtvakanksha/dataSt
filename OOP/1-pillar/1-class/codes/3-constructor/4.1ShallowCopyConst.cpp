#include <iostream>
using namespace std;
class copyConst
{
public:
    int *data;
    copyConst(int val) : data(new int(val)) {}
    // shallow copy
    // obj2's data points to the same int as obj1
    copyConst(const copyConst &otherObj) : data(otherObj.data){};
    // This copy constructor performs a shallow copy. It copies the pointer data from the other object. This means both the original object and the copied object share the same memory location for data. The copied object does not allocate its own memory or duplicate the data; it simply points to the same int as the original object.
    ~copyConst() { delete data; }
    // Destructor will be called for both obj1 and obj2, leading to double deletion
};
int main()
{
    copyConst obj1(10);
    copyConst obj2 = obj1;
    // Both obj1 and obj2 share the same memory location
    return 0;
}