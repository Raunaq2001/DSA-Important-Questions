/* Only the implementation of the code is provided */
/* @ author: RAUNAQ SINGH */
bool isPalindrome(Node *head)
    {
       int num1=0,num2=0;
       struct Node*temp=head;
       while(temp!=NULL){
           num1=(num1*10)+temp->data;
           temp=temp->next;
       }
       temp=head;
       struct Node*currNode=head,*nextNode=head,*prevNode=NULL;
       while(nextNode!=NULL){
           nextNode=nextNode->next;
           currNode->next=prevNode;
           prevNode=currNode;
           currNode=nextNode;7
       }
       head=prevNode;
       temp=head;
       while(temp!=NULL){
           num2=(num2*10)+temp->data;
           temp=temp->next;
       }
       if(num1==num2){
           return true;
       }
       else{
           return false;
       }
    }
