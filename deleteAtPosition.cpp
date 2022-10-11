#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void deleteAtPosition(node *&head, int pos)
{
    int count = 1;
    node *temp = head;
    while (count < pos - 1)
    {
        temp = temp->next;
        count++;
    }
    temp->next = temp->next->next;
    return;
}
int main()
{
    node *head = new node(1);
    head->next = new node(2);
    head->next->next = new node(3);
    head->next->next->next = new node(4);
    print(head);
    deleteAtPosition(head, 2);
    print(head);

    return 0;
}