/* Only the function implementation is given */
int getNthFromLast(struct Node *head, int n)
{
    struct Node*temp=head;
    int i,size=0;
    while(temp!=NULL){
        size++;
        temp=temp->next;
    }
    temp=head;
    if(size<n) return -1;
    for(int i=1;i<(size-n+1);i++){
        temp=temp->next;
    }
    return temp->data;
}
