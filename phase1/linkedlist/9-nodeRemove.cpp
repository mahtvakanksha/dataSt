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
// brute:
node *remove(node *head, int n)
{
    node *temp = head;
    int len = 0;
    while (temp != nullptr)
    {
        len++;
        temp = temp->next;
    }
    if (head == nullptr || n > len)
        return head;
    temp = head;
    if (len == n)
    {
        node *newhead = head->next;
        delete head;
        return newhead;
    }
    int res = len - n - 1;
    while (res--)
    {
        temp = temp->next;
    }
    node *delnode = temp->next;
    temp->next = temp->next->next;
    delete delnode;
    return head;
}
// optimal
node *removenode(node *head, int n)
{
    node *fast = head;
    for (int i = 0; i < n; i++)
    {
        if (fast == nullptr)
            return head;
        fast = fast->next;
    }
    if (fast == nullptr)
    {
        node *newhead = head->next;
        delete head;
        return newhead;
    }
    node *slow = head;
    while (fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next;
    }

    node *delnode = slow->next;
    slow->next = slow->next->next;
    delete delnode;
    return head;
}
int main()
{
    vector<int> list1 = {1, 0, 1, 2, 0, 2, 1};
    node *head1 = convert(list1);
    printll(head1);
    cout << endl;
    int n;
    cout << "enter the node you wanna remove from last: ";
    cin >> n;
    // node *newhead = remove(head1, n);
    node *newhead = removenode(head1, n);
    printll(newhead);
    return 0;
}