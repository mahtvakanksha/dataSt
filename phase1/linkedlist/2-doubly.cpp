#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *next, *prev;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};
Node *insertAthead(int data, Node *&head)
{
    Node *temp = new Node(data);
    if (head == NULL)
    {
        head = temp;
        return head;
    }
    temp->next = head;
    head->prev = temp;
    head = temp;
    return head;
}
void printDL(Node *&head)
{
    if (head == NULL)
        return;
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "\t";
        temp = temp->next;
    }
}
void insertAtEnd(int data, Node *&head)
{
    if (head == NULL)
    {
        head = insertAthead(data, head);
        return;
    }
    Node *ptr = head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    Node *temp = new Node(data);
    temp->prev = ptr;
    ptr->next = temp;
}
void insertAtPos(int pos, int data, Node *&head)
{
    if (pos == 1 || head == NULL)
    {
        head = insertAthead(data, head);
        return;
    }
    Node *temp = head;
    for (int i = 1; i < pos - 1; i++)
    {
        temp = temp->next;
    }
    Node *newtemp = new Node(data);
    newtemp->prev = temp;
    newtemp->next = temp->next;
    temp->next = newtemp;
}

int main()
{
    Node *head = new Node(1);
    head = insertAthead(2, head);
    head = insertAthead(3, head);
    insertAtEnd(4, head);
    insertAtPos(1, 5, head);
    printDL(head);
    return 0;
}