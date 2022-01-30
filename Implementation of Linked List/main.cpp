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
        void insertNode(int num){
            struct node*temp=new node;
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
            struct node*temp=head;
            while(temp!=NULL){
                cout<<temp->data<<" ";
                temp=temp->next;
            }
        }

};
int main()
{
    linked_list ll;
    ll.insertNode(10);
    ll.insertNode(20);
    ll.insertNode(30);
    ll.display();
    return 0;
}
