#include <iostream>
#include <vector>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = nullptr;
    }
};
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
        ptr = temp;
    }
    return head;
}
void printll(node *head)
{
    node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << "\t";
        temp = temp->next;
    }
}
node *reversell(node *head)
{
    node *currnode = head;
    node *prevnode = nullptr;
    node *nextnode = nullptr;
    while (currnode != nullptr)
    {
        nextnode = currnode->next;
        currnode->next = prevnode;
        prevnode = currnode;
        currnode = nextnode;
    }
    return prevnode;
}
int main()
{
    vector<int> arr = {1, 2, 3, 6};
    node *head = convert(arr);
    printll(head);
    node *newhead = reversell(head);
    printll(newhead);
    return 0;
}