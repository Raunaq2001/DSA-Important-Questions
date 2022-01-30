#include <iostream>
struct ListNode{
    int data;
    struct ListNode*next;
};
class linked_list{
    private:
        struct ListNode*head,*temp,*tail;
    public:
        linked_list(){
            head=temp=tail=NULL;
        }
    void addNode(int num){
        temp=new ListNode;
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
    Node* findIntersection(Node* head1, Node* head2)
    {
        struct Node*temp1,*temp2,*temp3=NULL,*head3=NULL,*tail3=NULL;
        temp1=head1;
        temp2=head2;
        while(temp1!=NULL && temp2!=NULL){
            if(temp1->data==temp2->data){
                temp3=(Node*)malloc(sizeof(Node));
                temp3->data=temp1->data;
                temp3->next=NULL;
                if(head3==NULL){
                    head3=tail3=temp3;
            }
            else{
                tail3->next=temp3;
                tail3=temp3;
            }
            temp1=temp1->next;
            temp2=temp2->next;
            }
            else if(temp1->data<temp2->data){
                temp1=temp1->next;
            }
            else{
                temp2=temp2->next;
            }
        }
        return head3;
    }
};
