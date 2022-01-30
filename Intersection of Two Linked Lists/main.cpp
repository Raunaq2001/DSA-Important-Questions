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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        struct ListNode*temp1,*temp2;
        temp1=headA;
        temp2=headB;
        while(temp1!=temp2){
            if(temp1==NULL){
                temp1=headB;
            }
            else{
                temp1=temp1->next;
            }
            if(temp2==NULL){
                temp2=headA;
            }
            else{
                temp2=temp2->next;
            }
        }
        return temp1;
    }
};
