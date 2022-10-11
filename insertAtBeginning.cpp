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

node *insertAtBeginning(node *&head, int x)
{
    node *temp = new node(x);
    temp->next = head;
    return temp;
}
void print(node *&head)
{ // ACESSING LINKED LIST USING RECURSION
    if (head == NULL)
    {
        cout << "NULL" << endl;
        return;
    }
    else
    {
        cout << head->data << "->";
        print(head->next);
    }
}
int main()
{
    node *head = NULL;
    print(head);
    head = insertAtBeginning(head, 5);
    print(head);
    head = insertAtBeginning(head, 4);
    print(head);
    head = insertAtBeginning(head, 3);
    print(head);
    return 0;
}