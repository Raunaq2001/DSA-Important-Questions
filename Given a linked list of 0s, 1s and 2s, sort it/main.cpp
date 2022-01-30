/*Only the implementation of the function is given below */
Node* segregate(Node *head) {
        int zero=0,one=0,two=0;
        struct Node*temp=head;
        while(temp!=NULL){
            if(temp->data==0){
                zero++;
            }
            else if(temp->data==1){
                one++;
            }
            else{
                two++;
            }
            temp=temp->next;
        }
        temp=head;
        while(temp!=NULL){
            if(zero){
                temp->data=0;
                zero--;
            }
            else if(one){
                temp->data=1;
                one--;
            }
            else{
                temp->data=2;
                two--;
            }
            temp=temp->next;
        }
        return head;
    }
