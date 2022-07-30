    //Leetcode question # 23
    //@Author: RAUNAQ SINGH
    //Concept Used: Priority Queue
    priority_queue<int,vector<int>,greater<int>> minHeap;
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        for(int i=0;i<lists.size();i++){
            ListNode*temp=lists[i];
            while(temp!=NULL){
                minHeap.push(temp->val);
                temp=temp->next;
            }
        }
        ListNode*newHead=NULL,*temp=NULL;
        int size=minHeap.size();
        for(int i=0;i<size;i++){
            int num=minHeap.top();
            minHeap.pop();
            ListNode*newNode=new ListNode(num);
            if(newHead==NULL){
                newHead=temp=newNode;
            }
            else{
                temp->next=newNode;
                temp=newNode;
            }
        }
        return newHead;
    }
