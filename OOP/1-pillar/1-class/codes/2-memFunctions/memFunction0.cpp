#include <iostream>
using namespace std;
class memFunction0
{
private:
    int i = 0;

public:
    void print();
};
void memFunction0::print()
{
    cout << "explicit defn";
}
int main()
{
    memFunction0 m;
    m.print();
    return 0;
}