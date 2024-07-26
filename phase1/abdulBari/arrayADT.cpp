#include <iostream>
using namespace std;
class array
{
    int *A;
    int n; //   length-->no. of elements
    int size;

public:
    array(int sz, int len) : size(sz), n(len)
    {
        A = new int[size];
    }
    ~array()
    {
        delete[] A;
    }
    void input()
    {
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
    }
    void display()
    {
        cout << "array is..";
        for (int i = 0; i < n; i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }

    void appendAtEnd(int key)
    {
        if (n < size)
        {
            cout << "appending...";
            A[n++] = key;
        }
        else
        {
            cout << "can't append" << endl;
        }

        display();
    }
    void addAtIndex(int key, int index)
    {
        if (n <= size)
        {
            cout << "after adding at index:.." << endl;
            for (int i = n; i > index; i--)
            {
                A[i] = A[i - 1];
            }
            A[index] = key;
            n++;
            display();
        }
    }
    void delAtEnd()
    {
        if (n > 0 && size < 0)
        {
            n--;
        }
        else
        {
            cout << "no elements to delete";
        }
        display();
    }
    void deleteAtIndex(int index)
    {
        if (n > 0 && index < n)
        {
            for (int i = index; i < n; i++)
            {
                A[i] = A[i + 1];
            }
            n--;
        }
        else
        {
            cout << "no elements to delete";
        }
        display();
    }
};
int main()
{
    int size, n;
    cout << "enter size of array:";
    cin >> size;
    cout << "enter the number of elements in array";
    cin >> n;
    if (n > size)
    {
        cout << "Number of elements cannot be greater than size." << endl;
        return -1;
    }

    array a(size, n);
    cout << "enter array elements" << endl;
    a.input();
    a.display();
    // cout << "enter the key you want to append at the end :";
    // int key, pos;
    // cin >> key;
    // a.appendAtEnd(key);
    // cout << "enter the position";
    // cin >> pos;
    // a.addAtIndex(key, pos - 1);
    // a.delAtEnd();
    cout << "enter the deleting position ";
    cin >> pos;
    a.deleteAtIndex(pos - 1);
    return 0;
}