ListNode* getKth(ListNode*head,int k){
        while(head!=NULL && k>0){
            head=head->next;
            k--;
        }
        return head;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode*dummy=new ListNode(0,head);
        ListNode*groupPrev=dummy;
        while(1){
            ListNode*Kth=getKth(groupPrev,k);
            if(Kth==NULL) break;
            ListNode*groupNext=Kth->next;
            ListNode*prevNode=Kth->next,*currNode=groupPrev->next,*nextNode=groupPrev->next;
            while(nextNode!=groupNext){
                nextNode=nextNode->next;
                currNode->next=prevNode;
                prevNode=currNode;
                currNode=nextNode;
            }
            nextNode=groupPrev->next;
            groupPrev->next=Kth;
            groupPrev=nextNode;
        }
        return dummy->next;
    }
