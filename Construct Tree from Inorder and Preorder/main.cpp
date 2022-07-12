Node* generateTree(int in[],int pre[],int n,unordered_map<int,int> &mpp,int &preIndex,int inStart,int inEnd){
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
        temp->left=generateTree(in,pre,n,mpp,preIndex,inStart,inIndex-1);
        temp->right=generateTree(in,pre,n,mpp,preIndex,inIndex+1,inEnd);
        return temp;

    }
    Node* buildTree(int in[],int pre[], int n)
    {
        unordered_map<int,int> mpp;
        for(int i=0;i<n;i++){
            mpp[in[i]]=i;
        }
        int preIndex=0;
        return generateTree(in,pre,n,mpp,preIndex,0,n-1);
    }

//Leetcode question # 105
//https://takeuforward.org/data-structure/construct-a-binary-tree-from-inorder-and-preorder-traversal
    TreeNode*buildTree(vector<int> &preOrder,vector<int> &inOrder,map<int,int> mpp,int preStart,int preEnd,int inStart,int inEnd){
        if(preStart>preEnd || inStart>inEnd) return NULL;
        TreeNode*root=new TreeNode(preOrder[preStart]);
        int elem=mpp[root->val];
        int nelem=elem-inStart;
        root->left=buildTree(preOrder,inOrder,mpp,preStart+1,preStart+nelem,inStart,elem-1);
        root->right=buildTree(preOrder,inOrder,mpp,preStart+nelem+1,preEnd,elem+1,inEnd);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int,int> mpp;
        for(int i=0;i<inorder.size();i++){
            mpp[inorder[i]]=i;
        }
        int preStart=0,preEnd=preorder.size()-1,inStart=0,inEnd=inorder.size()-1;
        return buildTree(preorder,inorder,mpp,0,preEnd,0,inEnd);
    }
