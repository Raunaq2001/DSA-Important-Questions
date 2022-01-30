#include <iostream>
using namespace std;
struct node{
    int data;
    struct node*next;
}*head1;
class linked_list{
    private:
        struct node*head,*tail;
    public:
        linked_list(){
            head=NULL;
            tail=NULL;
        }
        void addNode(int num){
            struct node*temp=new node;
            temp->data=num;
            temp->next=NULL;
            if(head==NULL){
                head=tail=temp;
            }
            else{
                tail->next=temp;
                tail=temp;
            }
        }
        void display(){
            struct node*temp=head;
            while(temp!=0){
                cout<<temp->data<<" ";
                temp=temp->next;
            }
        }
        /* Iterative Implementation */
        void reverseLL(){
            struct node*currNode=head,*nextNode=head,*prevNode=NULL;
            while(nextNode!=NULL){
                nextNode=nextNode->next;
                currNode->next=prevNode;
                prevNode=currNode;
                currNode=nextNode;
            }
            head=prevNode;
        }
};
struct node* insertNode(int num){
    struct node*temp=new node;
    temp->data=num;
    temp->next=NULL;
    return temp;
};
void display(struct node*head){
    struct node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
void reverseLL(struct node*p){
    if(p->next==NULL){
        head1=p;
        return;
    }
    reverseLL(p->next);
    struct node*q=p->next;
    q->next=p;
    p->next=NULL;
};
int main()
{
    head1=insertNode(1);
    head1->next=insertNode(2);
    head1->next->next=insertNode(3);
    head1->next->next->next=insertNode(4);
    display(head1);
    reverseLL(head1);
    display(head1);
    return 0;
}
