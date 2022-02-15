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
