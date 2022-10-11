#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;

    node (int x){
        data=x;
        next=NULL;
    }   
    // ~node (){
    
    // }
};
node * deleteAtStart(node *head) {
    if(head==NULL) {
        return head;
    }
    head = head->next;
    return head;
}
void print(node *&head){
        node *temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
int main()
{
    node *head=new node(10);
    head->next=new node (20);
    head->next->next =new node (30);
    print(head);
    head=deleteAtStart(head);
    print (head);
    return 0;
}