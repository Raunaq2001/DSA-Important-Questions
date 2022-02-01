/* Only the implementation of the function is given

   The idea behind this approach is that first we reverse 1st linked list then we reverse 2nd linked list then we add the
   numbers contained in the nodes of those linked list, that sum%10 is now stored in another temp pointer which is initially
   pointing to NULL and then if any carry is created a new node is generated

   Finally the resultant list is reversed and then the head of it is returned

   @Author: RAUNAQ SINGH

*/
struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        struct Node*head=NULL,*temp=NULL,*tempNode,*nextNode=first,*currNode=first,*prevNode=NULL;
        int sum=0,carry=0;
        //Reverse the 1st LL
        while(nextNode!=NULL){
            nextNode=nextNode->next;
            currNode->next=prevNode;
            prevNode=currNode;
            currNode=nextNode;
        }
        first=prevNode;
        //Reverse the 2nd LL
        currNode=second,nextNode=second,prevNode=NULL;
        while(nextNode!=NULL){
            nextNode=nextNode->next;
            currNode->next=prevNode;
            prevNode=currNode;
            currNode=nextNode;
        }
        second=prevNode;
        while(first!=NULL || second !=NULL){
            sum=carry;
            if(first!=NULL){
                sum=sum+first->data;
                first=first->next;
            }
            if(second!=NULL){
                sum=sum+second->data;
                second=second->next;
            }
            tempNode=new Node(sum%10);
            carry=sum/10;
            if(head==NULL){
                head=temp=tempNode;
            }
            else{
                temp->next=tempNode;
                temp=tempNode;
            }
        }
        if(carry>0){
            temp->next=new Node(carry);
        }
        //Reverse the resultant LL
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
