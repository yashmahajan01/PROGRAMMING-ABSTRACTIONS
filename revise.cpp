#include <iostream>
using namespace std;

class node
{ // INITIALIZING LINKED LIST
public:
    int data;
    node *next;

    node(int x)
    {
        data = x;
        next = NULL;
    }
};

void print(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL";
}
int main()
{
    node *head = new node(10);
    node *second = new node(20);
    node *third = new node(30);
    head->next = second;
    second->next = third;
    print(head);

    return 0;
}