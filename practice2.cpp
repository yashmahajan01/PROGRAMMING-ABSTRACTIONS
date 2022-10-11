#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int x)
    {
        this->data = x;
        this->next = NULL;
    }
};

void print(node *head) // ACESSING LINKED LIST
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
void recursivePrint(node *head)
{ // ACESSING LINKED LIST USING RECURSION
    if (head == NULL)
    {
        return;
    }
    else
    {
        cout << head->data << " ";
        recursivePrint(head->next);
    }
}

int main()
{
    node *head = new node(10);
    node *first = new node(20);
    node *second = new node(30);

    head->next = first;
    first->next = second;
    print(head);
    recursivePrint(head); // RECURSIVE ACESSING LINKED LIST
    return 0;
}