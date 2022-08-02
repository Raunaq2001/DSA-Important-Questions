    //@Author: RAUNAQ SINGH
    //Leetcode question # 328
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode*temp=head,*Next=head->next,*NextCpy=head->next;
        while(temp->next!=NULL && Next->next!=NULL){
            temp->next=Next->next;
            temp=temp->next;
            Next->next=temp->next;
            Next=Next->next;
        }
        temp->next=NextCpy;
        return head;
    }
