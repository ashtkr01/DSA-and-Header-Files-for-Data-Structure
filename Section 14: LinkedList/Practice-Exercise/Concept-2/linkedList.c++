// A simple CPP program to introduce
// a linked list
#include <bits/stdc++.h>
using namespace std;
//Structure of Node:
class Node
{
public:
    int data;
    Node *next;
};


// Insert At End in a LinkedList:
Node *insertAtEnd(Node *head, int data)
{
    if (head == NULL)
    {
        Node *temp = new Node();
        temp->data = data;
        temp->next = NULL;
        head = temp;
        return head;
    }
    head->next = insertAtEnd(head->next, data);
    return head;
}
// Insert at front
Node *insertAtFront(Node *head, int data)
{
    if (head == NULL)
    {
        Node *temp = new Node();
        temp->data = data;
        temp->next = NULL;
        head = temp;
        return head;
    }
    Node *temp = new Node();
        temp->data = data;
        temp->next = head;
      head=temp;
    return head;
}
// Display the LinkeList:
void display(Node *head)
{
    Node *temp = new Node();
    temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "-->";
        temp = temp->next;
    }
}

int main(int argc, char const *argv[])
{
    Node *head = new Node();
    head=NULL;
    head = insertAtEnd(head, 0);
    head = insertAtEnd(head, 1);
    head = insertAtEnd(head, 2);
    head = insertAtEnd(head, 3);
    head = insertAtEnd(head, 4);
    head = insertAtFront(head, 5);
    head = insertAtFront(head, 5);
    head = insertAtFront(head, 5);
    // Display th LinkeList
    display(head);
    return 0;
}
