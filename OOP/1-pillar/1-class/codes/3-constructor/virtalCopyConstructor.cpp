// idk what does this prog means, gpt

#include <iostream>
using namespace std;
class base()
{
public:
    virtual ~base() {}
    virtual cloneMethod<base> clone() const = 0;
    virtual void print()
    {
        cout << "base class";
    }
};
class derived : public base
{
private:
    int value;

public:
    derived(int val) : value(val) {}
    cloneMethod<base> clone() const override
    {
        return newptr<derived>(*this);
    }
    void print() const override
    {
        std::cout << "This is Derived class with value: " << value << std::endl;
    }
};
void foo(const Base &base)
{
    std::unique_ptr<Base> copy = base.clone();
    copy->print();
}

int main()
{
    derived d(42);
    foo(d);

    return 0;
}