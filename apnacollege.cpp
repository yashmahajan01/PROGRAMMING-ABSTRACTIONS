#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int x)
    {
        data = x;
        next = NULL;
    }
};

void printList(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {

        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    printList(head);
    return 0;
}