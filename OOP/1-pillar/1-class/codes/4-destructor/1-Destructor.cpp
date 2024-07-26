#include <iostream>

using namespace std;

class base
{
public:
    base()
    {
        cout << "Constructing \n";
    }
    ~base()
    {
        cout << "Destructing \n";
    }
};
int main()
{
    base b;
    return 0;
}