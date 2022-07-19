    //Leetcode question # 138
    //@Author: RAUNAQ SINGH
    Node* copyRandomList(Node* head) {
        if(head==NULL) return NULL;
        Node*temp=head;
        while(temp!=NULL){
            Node* newNode=new Node(temp->val);
            newNode->next=temp->next;
            temp->next=newNode;
            temp=temp->next->next;
        }
        temp=head;
        while(temp!=NULL){
            if(temp->next!=NULL && temp->random!=NULL) temp->next->random=temp->random->next;
            else temp->next->random=NULL;
            temp=temp->next->next;
        }
        temp=head;
        Node*Head=temp->next,*newTemp=temp->next;
        while(temp!=NULL){
            if(temp->next!=NULL && newTemp->next!=NULL){
                temp->next=temp->next->next;
                newTemp->next=newTemp->next->next;    
            }
            else{
                temp->next=NULL;
                newTemp->next=NULL;
            }
            temp=temp->next;
            newTemp=newTemp->next;
        }
        return Head;
    }
