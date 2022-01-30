#include<iostream>
using namespace std;
struct node{
    int data;
    struct node*next;
};
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
                tail=temp->next;
                tail=temp;
            }
        }
        void display(){
            struct node*temp=head;
            while(temp!=NULL){
                cout<<temp->data<<" ";
                temp=temp->next;
            }
        }
        bool detectLoop(){
            struct node*slow=head;
            struct node*fast=head;
            int flag=0;
            while(fast->next!=NULL && fast->next->next!=NULL){
                slow=slow->next;
                fast=fast->next->next;
                if(fast==slow){
                    flag=1;
                    break;
                }
            }
            if(flag==1){
                return true;
            }
            else{
                return false;
            }
        }
};
