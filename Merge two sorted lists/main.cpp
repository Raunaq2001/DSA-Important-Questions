// Reccursive approach
ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode*result=NULL;
        if(list1==NULL){
            return list2;
        }
        else if(list2==NULL){
            return list1;
        }
        if(list1->val<=list2->val){
            result=list1;
            result->next=mergeTwoLists(list1->next,list2);
        }
        else{
            result=list2;
            result->next=mergeTwoLists(list1,list2->next);
        }
        return result;
    }
// Non reccursive approach
ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL){
            return list2;
        }
        if(list2==NULL){
            return list1;
        }
        ListNode*head=NULL,*temp=NULL;
        int i=1;
        while(list1!=NULL && list2!=NULL){
            if(list1->val<=list2->val){
                if(i==1){
                    head=temp=new ListNode(list1->val);
                    i++;
                }
                else{
                    temp->next=new ListNode(list1->val);
                    temp=temp->next;
                }
                list1=list1->next;
            }
            else{
                if(i==1){
                    head=temp=new ListNode(list2->val);
                    i++;
                }
                else{
                    temp->next=new ListNode(list2->val);
                    temp=temp->next;
                }
                list2=list2->next;
            }
        }
        if(list1!=NULL){
            while(list1!=NULL){
                temp->next=new ListNode(list1->val);
                temp=temp->next;
                list1=list1->next;
            }
        }
        if(list2!=NULL){
            while(list2!=NULL){
                temp->next=new ListNode(list2->val);
                temp=temp->next;
                list2=list2->next;
            }
        }
        return head;
    }
