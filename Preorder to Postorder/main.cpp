Node* generateTree(int in[],int pre[],int &preIndex,unordered_map<int,int> &mpp,int inStart,int inEnd){
    if(inStart>inEnd){
        return NULL;
    }
    int curr=pre[preIndex];
    preIndex++;
    Node*temp=new Node(curr);
    if(inStart==inEnd){
        return temp;
    }
    int inIndex=mpp[curr];
    temp->left=generateTree(in,pre,preIndex,mpp,0,inIndex-1);
    temp->right=generateTree(in,pre,preIndex,mpp,inIndex+1,inEnd);
    return temp;
}
void printPostOrder(Node*root){
    if(root==NULL){
        return;
    }
    printPostOrder(root->left);
    printPostOrder(root->right);
    cout<<root->data<<" ";
}
void post_order(int pre[], int n)
{
    int in[n];
    int preIndex=0;
    unordered_map<int,int> mpp;
    for(int i=0;i<n;i++){
        in[i]=pre[i];
    }
    sort(in,in+n);
    for(int i=0;i<n;i++){
        mpp[in[i]]=i;
    }
    Node*root=generateTree(in,pre,preIndex,mpp,0,n-1);
    printPostOrder(root);
}
