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
node *add(node *head1, node *head2)
{
    node *dummy = new node(-1);
    node *t1 = head1;
    node *t2 = head2;
    node *curr = dummy;
    int carry = 0;
    while (t1 != nullptr || t2 != nullptr)
    {
        int sum = carry;
        if (t1)
            sum += t1->data;
        if (t2)
            sum += t2->data;
        node *newnode = new node(sum % 10);
        carry = sum / 10;
        curr->next = newnode;
        curr = curr->next;
        if (t1)
            t1 = t1->next;
        if (t2)
            t2 = t2->next;
    }
    if (carry)
    {
        node *newnode = new node(carry);
        curr->next = newnode;
    }
    return dummy->next;
}
int main()
{
    vector<int> list1 = {3, 5};
    node *head1 = convert(list1);
    printll(head1);
    vector<int> list2 = {4, 5, 9, 9};
    node *head2 = convert(list2);
    cout << endl;
    printll(head2);
    cout << endl;
    // adding both:
    node *newhead = add(head1, head2);
    printll(newhead);
    return 0;
}
