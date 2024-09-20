#include <iostream>
#include <vector>
using namespace std;
class node
{
public:
    int data;
    node *next, *prev;
    node(int val)
    {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};
void printll(node *head)
{
    node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << "\t";
        temp = temp->next;
    }
}
node *convert(vector<int> &v)
{
    if (v.size() == 0)
        return NULL;

    node *head = new node(v[0]);
    node *ptr = head;
    for (int i = 1; i < v.size(); i++)
    {
        node *temp = new node(v[i]);
        ptr->next = temp;
        temp->prev = ptr;
        ptr = temp;
    }
    return head;
}
int main()
{
    vector<int> arr = {1, 2, 3, 6};
    node *head = convert(arr);
    printll(head);
    return 0;
}