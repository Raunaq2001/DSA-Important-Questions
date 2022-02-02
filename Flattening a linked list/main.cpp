/* Only the function implementation is provided

   For explanation of the approach visit:https://takeuforward.org/data-structure/flattening-a-linked-list/

*/
Node *mergeList(Node* l1,Node* l2){
    struct Node* temp=new Node(0);
    struct Node* res=temp;
    while(l1!=NULL && l2!=NULL){
        if(l1->data<l2->data){
            temp->bottom=l1;
            temp=temp->bottom;
            l1=l1->bottom;
        }
        else{
            temp->bottom=l2;
            temp=temp->bottom;
            l2=l2->bottom;
        }
    }
    if(l1) temp->bottom=l1;
    if(l2) temp->bottom=l2;
    return res->bottom;
}
Node *flatten(Node *head)
{
   struct Node* temp;
   if(head==NULL || head->next==NULL){
       return head;
   }
   head->next=flatten(head->next);
   head=mergeList(head,head->next);
   return head;
}
