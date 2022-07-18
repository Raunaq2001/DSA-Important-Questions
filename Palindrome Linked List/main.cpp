    //Leetcode question # 234
    //@Author: RAUNAQ SINGH
    ListNode* reverseList(ListNode*head){
        ListNode*prevNode=NULL,*currNode=head,*nextNode=head;
        while(nextNode!=NULL){
            nextNode=nextNode->next;
            currNode->next=prevNode;
            prevNode=currNode;
            currNode=nextNode;
        }
        head=prevNode;
        return head;
    }
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL) return true; //If the LL is empty or size is 1 then it will always be palindrome
        //First we find the mid point to divide the two lists in equal parts
        ListNode*fast=head,*slow=head,*prev=NULL;
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            prev=slow;
            slow=slow->next;
        }
        prev->next=NULL;
        //Using this we reverse the 2nd LL
        slow=reverseList(slow);
        ListNode*temp1=head,*temp2=slow;
        //We then compare if the order of elements are same or not if we ever encounter a occourance where they aren't equal we return false
        while(temp1!=NULL && temp2!=NULL){
            if(temp1->val!=temp2->val) return false;
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return true;
    }
