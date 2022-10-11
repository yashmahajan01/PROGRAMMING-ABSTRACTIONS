#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ->";
        temp = temp->next;
    }
    cout << "null" << endl;
}
Node *insertAtTail(Node *&head, int a)
{
    Node *temp = head;
    while ((temp->next) != NULL)
    {
        temp = temp->next;
    }
    Node *tail = new Node(a);
    temp->next = tail;
    return tail;
}
int main()
{
    Node *first = new Node(10);
    first->next = new Node(20);
    first->next->next = new Node(30);
    Node *tail;
    print(first);
    tail = insertAtTail(first, 40);
    print(first);
    tail = insertAtTail(first, 70);
    print(first);
    return 0;
}