#include<iostream>
using namespace std;
struct node{
    int data;
    sruct node*next;
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
        int loopPosition(){
            struct node*slow,*fast;
            slow=fast=head;
            while(fast->next!=NULL && fast->next->next!=NULL){
                slow=slow->next;
                fast=fast->next->next;
                if(fast==slow){
                    slow=head;
                    slow=slow->next;
                    fast=fast->next;
                    if(fast==slow){
                        int num=slow->data;
                        return num;
                    }
                }
            }
            return;
        }

};
