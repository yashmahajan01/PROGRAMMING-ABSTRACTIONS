
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        this->data = x;
        this->next = NULL;
    }
};
int main()
{
    Node *head = new Node(10);
    Node *head2 = new Node(20);
    head->next = head2;
    return 0;
}