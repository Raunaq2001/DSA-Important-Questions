#include<iostream>
using namespace std;
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
        void deleteLoop(){
            struct node*fast,*slow;
        fast=slow=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                break;
            }
        }
        if(slow==head){
            fast=fast->next;
            while(fast->next!=slow){
                fast=fast->next;
            }
            fast->next=NULL;
        }
        else{
            slow=head;
            while(slow->next!=fast->next){
                slow=slow->next;
                fast=fast->next;
            }
            fast->next=NULL;
        }
        return;
};
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
