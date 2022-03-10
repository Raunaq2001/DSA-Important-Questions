int getMaxWidth(struct Node* root) {
    if(root==NULL){
        return 0;
    }
    int result=0;
    queue<Node*> q;
    q.push(root);
    while(q.empty()==false){
        int n=q.size();
        result=max(result,n);
        for(int i=1;i<=n;i++){
            Node*temp=q.front();
            q.pop();
            if(temp->left!=NULL){
                q.push(temp->left);
            }
            if(temp->right!=NULL){
                q.push(temp->right);
            }
        }
    }
    return result;
}
