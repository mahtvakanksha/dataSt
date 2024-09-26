/*
    2->4->6 and 3->8->7
    add 642
       +783
       ------
        1425

        5-->2-->4-->1
*/
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
        ptr = temp;
    }
    return head;
}
node *oddeven(node *head)
{
    if (!head || !head->next)
    {
        return head;
    }
    node *oddhead = head;
    node *evenhead = head->next;
    node *odd = oddhead;
    node *even = evenhead;
    while (even && even->next)
    {
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }
    odd->next = evenhead;
    return oddhead;
}
int main()
{
    vector<int> list1 = {1, 3, 4, 2, 5};
    node *head1 = convert(list1);
    printll(head1);
    cout << endl;
    node *newhead = oddeven(head1);
    printll(newhead);
    return 0;
}
