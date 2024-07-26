#include <iostream>
using namespace std;
class memfunction3; // forward declaration

class Friend
{
private:
    int i;

public:
    void print();
};

inline void inlineFunction()
{
    cout << "YO";
}

class memFunctions3
{
private:
    int x = 10; // initialization is fine only in cpp11 and later versions else outside the class
public:
    void show()
    {
        cout << x;
    }

    friend void friendFunction();
    // has access to private data members of class
    //  gives private access to non member function(global or member function of another class)

    friend void Friend::print();
};

// defn of friend function print
void Friend::print()
{
    cout << "from friend class";
}

void friendFunction()
{
    memFunctions3 objFr;
    objFr.x = 20; // doesn't modifies x
    cout << objFr.x;
}

int main()
{
    memFunctions3 obj;
    // friendFunction();
    // obj.show();
    cout << endl;
    // inlineFunction(); // it will bring the definition of inline function here only, reduces overhead for small functions
    Friend f;
    f.print();
    return 0;
}