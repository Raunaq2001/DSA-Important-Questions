/* Only ther implementation of the function is given */
Node* addOne(Node *head)
    {
        struct Node *currNode=head,*prevNode=NULL,*nextNode=head,*temp=head,*copy;
        int carry=1,sum;
        while(nextNode!=NULL){
            nextNode=nextNode->next;
            currNode->next=prevNode;
            prevNode=currNode;
            currNode=nextNode;
        }
        head=prevNode;
        temp=head;
        while(temp!=NULL){
            sum=temp->data+carry;
            carry=(sum>=10)?1:0;
            sum=sum%10;
            temp->data=sum;
            copy=temp;
            temp=temp->next;
        }
        if(carry){
            copy->next=new Node(carry);
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
