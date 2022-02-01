#include <iostream>
using namespace std;
struct node{
    int data;
    struct node*next;
};
class circular_linked_list{
    private:
        struct node*head,*tail,*temp;
    public:
        circular_linked_list(){
            head=tail=temp=NULL;
        }
        void addNode(int num){
            temp=new node;
            temp->data=num;
            if(head==NULL){
                head=tail=temp;
            }
            else{
                tail->next=temp;
                tail=temp;
            }
            tail->next=head;
        }
        void deleteNode(int num){
            temp=head;
            struct node*copyPtr=head;
            if(head->data==num){
                while(copyPtr->next!=head){
                    copyPtr=copyPtr->next;
                }
                head=head->next;
                copyPtr->next=head;
                free(temp);
            }
            else if{
                while(temp->next->data==num && temp->next!=head){
                    copyPtr=temp->next;
                    temp->next=copyPtr->next;
                    free(copyPtr);
                }
            }
            else{
                temp=head;
                while(temp->next->data==num && temp->next->next==head){
                    copyPtr=temp->next;
                    temp->next=head;
                    free(copyPtr);
                }
            }
        }
};
