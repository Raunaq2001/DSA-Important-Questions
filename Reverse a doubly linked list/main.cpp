#include <iostream>
using namespace std;
struct node{
    int data;
    struct node*prev;
    struct node*next;
};
class doubly_linked_list{
    private:
        struct node*head,*temp,*tail;
    public:
        doubly_linked_list(){
            head=temp=tail=NULL;
        }
        void addNode(int num){
            temp=new node;
            temp->data=num;
            temp->prev=NULL;
            temp->next=NULL;
            if(head==NULL){
                head=tail=temp;
            }
            else{
                tail->next=temp;
                temp->prev=tail;
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
        void reverseList(){
            struct node*current=head,*temp=NULL;
            if(head->next==NULL) return;
            while(current!=NULL){
                temp=current->prev;
                current->prev=current->next;
                current->next=temp;
                current=current->prev;
            }
            if(temp!=NULL){
                head=temp->prev;
            }
        }
};
int main()
{
    doubly_linked_list dl;
    dl.addNode(10);
    dl.addNode(20);
    dl.addNode(30);
    dl.addNode(40);
    dl.addNode(50);
    dl.display();
    cout<<endl;
    dl.reverseList();
    dl.display();
    return 0;
}
