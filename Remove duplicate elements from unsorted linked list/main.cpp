/* Only the implementation of the function is given below

   The idea is to use a frequency array

   @Author: RAUNAQ SINGH

*/
Node * removeDuplicates( Node *head)
    {
        int max=INT_MIN;
        struct Node*temp=head,*prev=NULL;
        while(temp!=NULL){
            if(temp->data>max){
                max=temp->data;
            }
            temp=temp->next;
        }
        max++;
        int freqArr[max];
        temp=head;
        for(int i=0;i<max;i++){
            freqArr[i]=0;
        }
        while(temp!=NULL){
            if(freqArr[temp->data]==0){
                freqArr[temp->data]=1;
                prev=temp;
                temp=temp->next;
            }
            else{
                if(temp->next==NULL){
                    prev->next=NULL;
                }
                else{
                    prev->next=temp->next;
                }
                temp=temp->next;
            }
        }
        return head;
    }
