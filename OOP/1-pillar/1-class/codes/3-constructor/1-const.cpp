#include <iostream>
using namespace std;
class Constructor
{
private:
    int x;

public:
    // Constructor()
    // {
    //     cout << "enter a num";
    //     cin >> x;
    // }
    Constructor();
    void display()
    {
        cout << endl
             << x;
    }
};
Constructor::Constructor()
{
    cout << "enter num";
    cin >> x;
}
int main()
{
    Constructor c;
    c.display();
    return 0;
}