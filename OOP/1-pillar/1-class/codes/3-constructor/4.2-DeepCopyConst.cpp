#include <iostream>
using namespace std;
class copyConst
{
public:
    int *data;
    copyConst(int val) : data(new int(val)) {}
    // deepcopy

    copyConst(const copyConst &otherObj) : data(*otherObj.data){};

    ~copyConst() { delete data; }
};
int main()
{
    copyConst obj1(10);
    copyConst obj2 = obj1;

    return 0;
}