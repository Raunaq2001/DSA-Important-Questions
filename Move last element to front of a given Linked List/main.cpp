#include <iostream>
using namespace std;
struct node{
    int data;
    struct node*next;
};
class linked_list{
    private:
        struct node*head,*temp,*tail;
    public:
        linked_list(){
            head=temp=tail=NULL;
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
        void rotateFunc(){
            struct node*prevNode=NULL,*currNode=head,*nextNode=head;
            int copyVal;
            while(nextNode!=NULL){
                nextNode=nextNode->next;
                currNode->next=prevNode;
                prevNode=currNode;
                currNode=nextNode;
            }
            head=prevNode;
            temp=head;
            while(temp->next!=NULL){
                copyVal=temp->data;
                temp->data=temp->next->data;
                temp->next->data=copyVal;
                temp=temp->next;
            }
            prevNode=NULL,currNode=head,nextNode=head;
            while(nextNode!=NULL){
                nextNode=nextNode->next;
                currNode->next=prevNode;
                prevNode=currNode;
                currNode=nextNode;
            }
            head=prevNode;
        }
};
int main()
{
    linked_list ll;
    ll.addNode(1);
    ll.addNode(2);
    ll.addNode(3);
    ll.addNode(4);
    ll.addNode(5);
    cout<<"Before = ";
    ll.display();
    cout<<endl;
    ll.rotateFunc();
    cout<<"After = ";
    ll.display();
    return 0;
}
