#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
Node *insertAtHead(int data, Node *&head)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
    return head;
}
void printLL(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "\t";
        temp = temp->next;
    }
}
void insertAtEnd(int data, Node *&head)
{
    Node *temp = new Node(data);
    Node *ptr = head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;
}
void insertAtPosition(int pos, int data, Node *&head)
{
    if (pos == 1)
    {
        insertAtHead(data, head);
        return;
    }
    Node *ptr = head;
    Node *temp = new Node(data);
    for (int i = 1; i < pos - 1; i++)
    {
        if (ptr->next == NULL)
            cout << "Out of bounds";
        ptr = ptr->next;
    }
    temp->next = ptr->next;
    ptr->next = temp;
}
Node *deleteAtHead(Node *&head)
{
    if (head == NULL)
        return NULL;
    Node *temp = head;
    head = head->next;
    delete temp;
    return head;
}
void deleteAtEnd(Node *&head)
{
    if (head == NULL)
    {
        return;
    }
    Node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    Node *ptr = temp->next;
    temp->next = NULL;
    delete ptr;
}
void deleteAtPos(int pos, Node *&head)
{
    if (pos == 1)
    {
        deleteAtHead(head);
        return;
    }
    if (head == NULL)
    {
        return;
    }

    Node *ptr = head;
    for (int i = 1; i < pos - 1; i++)
    {
        if (ptr == NULL || ptr->next == NULL)
            return;
        ptr = ptr->next;
    }
    Node *temp = ptr->next;
    ptr->next = temp->next;
    delete temp;
}
int main()
{
    Node *head = new Node(3);
    head = insertAtHead(12, head);
    insertAtEnd(9, head);
    insertAtPosition(4, 4, head);
    // head = deleteAtHead(head);
    // deleteAtEnd(head);
    deleteAtPos(1, head);
    printLL(head);
    return 0;
}