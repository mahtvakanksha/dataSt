#include <iostream>
using namespace std;
class accessModifiers
{
private:
    int pvt;
    // can be accessed only within class definition
public:
    int pub;
    // can be accessed everywhere
protected:
    int pro;
    // can be accessed even outside but using inheritance
};
int main()
{
    accessModifiers a;
    // a.pvt=10; we can't
    a.pub = 30;
    cout << a.pub;
    // a.pro; can;t, only using inheritance
    return 0;
}