//Leetcode question # 116
//@Author: RAUNAQ SINGH
//Concept Used: Level Order Traversal
    Node* connect(Node* root) {
        if(root==NULL) return NULL;
        Node*newRoot=root;
        queue<Node*> q;
        q.push(root);
        int size=1;//Since it is a complete BST the number of nodes at each level will be 2^i where i>=0
        while(!q.empty()){
            int n=q.size();
            for(int i=0;i<size;i++){
                Node*temp=q.front();
                q.pop();
                if(n==1) temp->next=NULL;
                else{
                    Node*newNode=q.front();
                    temp->next=newNode;
                    n--;
                }
                if(temp->left!=NULL) q.push(temp->left);
                if(temp->right!=NULL) q.push(temp->right);
            }
            size=size*2;//Since it is a complete BST so the number of nodes will increase as a power of 2
        }
        return newRoot;
    }
