// JAI MATA DI
// LINKED LIST
// TYPES :- 1. SINGLE 2. DOUBLE 3. CICULAR

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
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ->";
        temp = temp->next;
    }
    cout << "null" << endl;
}
/* Node *insertAtBegin(Node *head, int x)
{
    Node *newNode = new Node(x);
    newNode->next = head;
    return newNode;
}*/
Node *insertAtRandom(Node *random, int a)
{
    Node *newNode = new Node(a);
    newNode->next = random->next;
    random->next = newNode;
    return newNode;
}

int main()
{

    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    first->next = second;
    second->next = third;
    print(first);
    /* first = insertAtBegin(first, 5);
    print(first) */
    second = insertAtRandom(second, 7);
    print(first);
    third = insertAtRandom(third, 25);
    print(first);
    return 0;
}
