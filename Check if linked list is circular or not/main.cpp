#include <iostream>
struct Node{
    int data;
    struct Node*next;
};
class linked_list{
    private:
        struct Node*head,*temp,*tail;
    public:
        linked_list(){
            head=tail=temp=NULL;
        }
        void addNode(int num){
            temp=new Node;
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
        bool isCircular(Node *head)
        {
            struct Node*temp=head->next;
            while(temp){
            if(temp==head){
                flag=1;
                break;
            }
                temp=temp->next;
            }
            if(flag==1){
                return true;
            }
            else{
            return false;
            }
        }
};
