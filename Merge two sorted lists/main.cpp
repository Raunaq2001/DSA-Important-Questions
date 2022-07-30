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
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
            //Folowing code when the existing linkedlist is to be altered into sorted list
    //@Author: RAUNAQ SINGH
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2){
        if(l1==NULL && l2==NULL) return NULL;
        if(l1==NULL) return l2;
        if(l2==NULL) return l1;
        ListNode*newHead=NULL,*temp=NULL;
        while(l1!=NULL && l2!=NULL){
            if(l1->val<=l2->val){
                if(newHead==NULL){
                    newHead=l1;
                    temp=l1;
                }
                else{
                    temp->next=l1;
                    temp=temp->next;
                }
                l1=l1->next;
            }
            else{
                if(newHead==NULL){
                    newHead=l2;
                    temp=l2;
                }
                else{
                    temp->next=l2;
                    temp=temp->next;
                }
                l2=l2->next;
            }
        }
        if(l1!=NULL) temp->next=l1;
        if(l2!=NULL) temp->next=l2;
        return newHead;
    }
