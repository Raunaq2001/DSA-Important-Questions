//Leetcode question # 138
//https://www.youtube.com/watch?v=4apaOcK586U&t=441s&ab_channel=AnujBhaiya
Node* copyRandomList(Node* head) {
        Node*curr=head;
        while(curr!=NULL){
            Node*temp=curr->next;
            curr->next=new Node(curr->val);
            curr->next->next=temp;
            curr=temp;
        }
        curr=head;
        while(curr!=NULL){
            if(curr->next!=NULL){
                if(curr->random!=NULL){
                    curr->next->random=curr->random->next;
                    curr=curr->next;
                }
                else{
                    curr->next->random=NULL;
                }
            }
        }
        curr=head;
        Node*temp=head->next;
        Node*newNode=temp;
        while(curr!=NULL){
            curr->next=curr->next->next;
            temp->next=temp->next->next;
            curr=curr->next;
            temp=temp->next;
        }
        return newNode;
    }
