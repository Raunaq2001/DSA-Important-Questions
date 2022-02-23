int getNodes(Node*root){
    int counter=0;
    if(root==NULL){
        return -1;
    }
    Node*curr=root;
    while(curr!=NULL){
        if(curr->left==NULL){
            counter++;
            curr=curr->right;
        }
        else{
            Node*temp=curr->left;
            while(temp->right!=NULL && temp->right!=curr){
                temp=temp->right;
            }
            if(temp->right==NULL){
                temp=right=curr;
                curr=curr->left;
            }
            else{
                temp->right=NULL;
                counter++;
                curr=curr->left;
            }
        }
    }
    return counter;
}
int findMedian(Node*root){
    if(root==NULL){
        return -1;
    }
    int counter=getNodes(root);
    int currCount=0;
    Node*curr=root,*temp,*prev;
    while(curr!=NULL){
        if(curr->left==NULL){
            currCount++;
            if(counter%2!=0 && currCount==(counter+1)/2){
                return prev->data;
            }
            else{
                return (prev->data+curr->data)/2;
            }
        }
        else{
            temp=curr->left;
            while(temp->right!=NULL && temp->right!=curr){
                emp=temp->right;
            }
            if(temp->right==NULL){
                temp->right=curr;
                curr=curr->left;
            }
            else{
                temp->right=NULL;
                prev=temp;
                currCount++;
                if(counter%2!=0 && currCount==(counter+1)/2){
                    return prev->data;
                }
                else if(counter%2==0 && currCount==(counter+1)/2){
                    return (prev->data+curr->data)/2;
                }
                prev=curr;
                curr=curr->right;
            }
        }
    }
}
