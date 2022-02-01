/* Only the implementation of the function is given

   The intuition behind this approach is to first reverse the linked list's first "k" elements using iterative method
   then using the recursive method for nodes k+1 we rotate the remaning nodes and return the result to head->next
   finally prevNode will be pointing to the head of the resultant linked list and then we return the prevNode

   @Author: RAUNAQ SINGH
*/
struct node *reverse (struct node *head, int k)
    {
        struct node*prevNode=NULL,*currNode=head,*nextNode=head;
        int counter=0;
        while(nextNode!=0 && counter<k){
            nextNode=nextNode->next;
            currNode->next=prevNode;
            prevNode=currNode;
            currNode=nextNode;
            counter++;
        }
        if(nextNode!=NULL){
            head->next=reverse(nextNode,k);
        }
        return prevNode;
    }
