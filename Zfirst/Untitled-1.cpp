#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insert_tail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
void display(node *head)
{
    node *temp = head;
    if (head == NULL)
    {
        cout << "no elements inserted,check again";
    }
    while (temp != NULL)
    {
        cout << temp->data << "\t";
        temp = temp->next;
    }
}

int main()
{
    node *head = NULL;
    insert_tail(head, 20);
    insert_tail(head, 100);
    insert_tail(head, 40);
    insert_tail(head, 60);
    insert_tail(head, 80);
    display(head);
    return 0;
}