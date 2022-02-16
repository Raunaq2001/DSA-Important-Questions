// @Author: RAUNAQ SINGH
// This will return a balanced BST
Node* sortedArrayToBST(int arr[],int lb,int ub){
    if(lb<ub){
        int mid=(lb+ub)/2;
        Node*root=new Node(arr[mid]);
        root->left=sortedArrayToBST(arr,lb,mid-1);
        root->right=sortedArrayToBST(arr,mid+1,ub);
    }
    return root;
}
