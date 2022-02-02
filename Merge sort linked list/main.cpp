class Solution{
  public:
    void mergeSorting(Node** head){
        Node*curr=*head;
        Node*first,*second;
        if(curr==NULL || curr->next==NULL){
            return;
        }
        findMiddle(curr,&first,&second);
        mergeSorting(&first);
        mergeSorting(&second);
        *head=mergeBoth(first,second);
    }
    Node* mergeBoth(Node*first,Node*second){
        Node*temp=NULL;
        if(first==NULL){
            return second;
        }
        else if(second==NULL){
            return first;
        }
        if(first->data<=second->data){
                temp=first;
                temp->next=mergeBoth(first->next,second);
        }
        else{
                temp=second;
                temp->next=mergeBoth(first,second->next);
        }
        return temp;
    }
    void findMiddle(Node*curr,Node**first,Node**second){
        Node*fast=curr->next,*slow=curr;
        while(fast!=NULL){
            fast=fast->next;
            if(fast!=NULL){
                fast=fast->next;
                slow=slow->next;
            }
        }
        *first=curr;
        *second=slow->next;
        slow->next=NULL;
    }
    Node* mergeSort(Node* head) {
        mergeSorting(&head);
        return head;
    }
};
