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
node *sort(node *head)
{
    if (head == nullptr || head->next == nullptr)
        return head;
    node *zerohead = new node(-1);
    node *onehead = new node(-1);
    node *twohead = new node(-1);
    node *zero = zerohead;
    node *two = twohead;
    node *one = onehead;
    node *temp = head;
    while (temp != nullptr)
    {
        if (temp->data == 0)
        {
            zerohead->next = temp;
            zerohead = zerohead->next;
        }
        else if (temp->data == 1)
        {
            onehead->next = temp;
            onehead = onehead->next;
        }
        else
        {
            twohead->next = temp;
            twohead = twohead->next;
        }
        temp = temp->next;
    }
    zerohead->next = (one->next != nullptr) ? one->next : two->next;
    onehead->next = two->next;
    twohead->next = nullptr;
    delete temp, zerohead, onehead, twohead, two, one;
    return zero->next;
}
int main()
{
    vector<int> list1 = {1, 0, 1, 2, 0, 2, 1};
    node *head1 = convert(list1);
    printll(head1);
    cout << endl;
    node *newhead = sort(head1);
    printll(newhead);
    return 0;
}