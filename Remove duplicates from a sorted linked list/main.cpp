#include <iostream>
struct node{
    int data;
    struct node*next;
};
class linked_list{
    private:
        struct node*head,*tail,*temp;
    public:
        linked_list(){
            head=tail=temp=NULL;
        }
        void addNode(int num){
            temp=new node;
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
            temp=head;
            while(temp!=NULL){
                cout<<temp->data<<" ";
                temp=temp->next;
            }
        }
        void removeDuplicate(){
            struct node*p,*q,*temp;
            temp=head;
            p=head;
            while(p->next!=NULL){
                if(p->data==p->next->data){
                    q=p->next->next;
                    freelist(p->next);
                    p=p->next;
                }
                else{
                    p=p->next;
                }
            }
            head=temp;
            // If the question requires to return a value of node then comment out line 46 and write "return temp;"
        }
};
