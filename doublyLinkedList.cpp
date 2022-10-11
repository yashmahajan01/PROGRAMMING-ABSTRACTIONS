#include<iostream>
using namespace std;

class node {
public:
    int data;
    node *next;
    node *prev;

    node(int x){
        this->data=x;
        next=NULL;
        prev=NULL;
    }

};
void print(node *&head,node* &tail){
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
    cout<<"Head is "<<head->data<<endl;
    cout<<"Tail is "<<tail->data<<endl;
       
}
void insertAtHead(node *&head,int x){
    if (head==NULL){
        node *temp=new node(x);
        head=temp;
        return;
    }
    else{
    node *temp=new node (x);
    temp->next=head;
    head->prev=temp;
    head=temp;}
}
void insertAtTail(node *&tail,int x){
    if (tail==NULL){
        node *temp=new node(x);
        tail=temp;
        return;
    }
    else{
    node *temp=new node (x);
    temp->next=tail;
    tail->prev=temp;
    tail=temp;}
}
int main()
{
    node *node1=new node (10);
    node *head=node1;
    node *tail=node1;
    print(head,tail);

    insertAtHead(head,5);
    print(head,tail);

    insertAtHead(head,3);
    print(head,tail);

    insertAtTail(tail,20);
    print(head,tail);
    return 0;
}