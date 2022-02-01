#include <iostream>
using namespace std;
struct node{
    int data;
    struct node*next;
    struct node*prev;
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
            temp->next=NULL;
            temp->prev=NULL;
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
        void rotateList(int k){
            struct node*startNode=NULL,*breakingNode=NULL;
            temp=head;
            int i=0;
            while(i<k-1){
                temp=temp->next;
                i++;
            }
            breakingNode=temp;
            temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=head;
            head->prev=temp;
            startNode=breakingNode->next;
            startNode->prev=NULL;
            breakingNode->next=NULL;
            head=startNode;
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
    dl.rotateList(2);
    dl.display();
    return 0;
}
