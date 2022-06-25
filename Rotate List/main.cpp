//Leetcode question 61
ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL || k==0){
            return head;
        }
        ListNode*temp=head,*newHead=NULL;
        int listSize=1;
        while(temp->next!=NULL){
            listSize++;
            temp=temp->next;
        }
        temp->next=head;
        k=k%listSize;
        int iterations=listSize-k;
        while(iterations){
            temp=temp->next;
            iterations--;
        }
        newHead=temp->next;
        temp->next=NULL;
        return newHead;
    }
