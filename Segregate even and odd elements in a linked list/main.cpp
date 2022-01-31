/* Only the implementation of the function is provided */
Node* divide(int N, Node *head){
        struct Node*evenStart=NULL,*evenEnd=NULL,*oddStart=NULL,*oddEnd=NULL,*currNode=head;
        while(currNode!=NULL){
            int val=currNode->data;
            if(val%2==0){
                if(evenStart==NULL){
                    evenStart=evenEnd=currNode;
                }
                else{
                    evenEnd->next=currNode;
                    evenEnd=evenEnd->next;
                }
            }
            else{
                if(oddStart==NULL){
                    oddStart=oddEnd=currNode;
                }
                else{
                    oddEnd->next=currNode;
                    oddEnd=oddEnd->next;
                }
            }
            currNode=currNode->next;
        }
        if(evenEnd) evenEnd->next=oddStart;
        if(oddEnd) oddEnd->next=NULL;
        if(evenStart==NULL || oddStart==NULL) return head;
        return evenStart;
    }
