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
