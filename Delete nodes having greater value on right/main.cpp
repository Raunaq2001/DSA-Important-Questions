/* Only the implementation of the function is provided */
/* The intuition is that we first reverse the given linked list now we point a temp variable of type Node to head and we
   we check that if temp->data<temp->next->data || temp->data==temp->next->data if this is true then we just increment temp
   else we assign temp->next to temp->next->next after doing all the changes i.e. iterating the loop till
   temp!=NULL || temp->next!=NULL we finally reverse the linked list and then return the head

   Author: RAUNAQ SINGH
*/
Node *compute(Node *head)
    {
        struct Node*currNode=head,*nextNode=head,*prevNode=NULL,*temp;
        while(nextNode!=NULL){
            nextNode=nextNode->next;
            currNode->next=prevNode;
            prevNode=currNode;
            currNode=nextNode;
        }
        head=prevNode;
        temp=head;
        while(temp->next!=NULL && temp!=NULL){
            if(temp->data<temp->next->data || temp->data==temp->next->data){
                temp=temp->next;
            }
            else{
                temp->next=temp->next->next;
            }
        }
        currNode=head,nextNode=head,prevNode=NULL;
        while(nextNode!=NULL){
            nextNode=nextNode->next;
            currNode->next=prevNode;
            prevNode=currNode;
            currNode=nextNode;
        }
        head=prevNode;
        return head;
    }
