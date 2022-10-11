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

int search(node *head, int x)
{
    int result = 0;
    if (head == NULL)
    {
        return -1;
    }
    if (head->data == x)
    {
        return 1;
    }
    else
    {
        result = search(head->next, x);
    }
    if (result == -1)
    {
        return -1;
    }
    else
    {
        return result + 1;
    }
}

int main()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    cout << search(head, 40);
    return 0;
}