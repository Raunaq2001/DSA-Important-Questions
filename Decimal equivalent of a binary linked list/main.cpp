Node*reverseList(Node*head){
    Node*prevNode=NULL,*currNode=head,*nextNode=head;
    while(nextNode!=NULL){
        nextNode=nextNode->next;
        currNode->next=prevNode;
        prevNode=currNode;
        currNode=nextNode;
    }
    return prevNode;
}
int getDecimal(Node*head){
    if(head==NULL){
        return -1;
    }
    head=reverseList(head);
    int i=0,ans=0;
    Node*temp=head;
    while(temp!=NULL){
        ans=ans+(pow(2,i)*temp->data);
        temp=temp->data;
        i++;
    }
    return ans;
}
