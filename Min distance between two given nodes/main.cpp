// @Author: RAUNAQ SINGH
int distance(Node*root,int a){
        if(root==NULL){
            return -1;
        }
        int dist=-1;
        if((root->data == a)||(dist =distance(root->left,a))>= 0||(dist=distance(root->right, a))>=0)
        return dist + 1;
        return dist;
    }
    Node* findLCA(Node*root,int a,int b){
        if(root==NULL || root->data==a || root->data==b){
            return root;
        }

        Node* left=findLCA(root->left,a,b);
        Node* right=findLCA(root->right,a,b);
        if(left==NULL){
            return right;
        }
        else if(right==NULL){
            return left;
        }
        else{
            return root;
        }
    }
    int findDist(Node* root, int a, int b) {
        int d1=distance(root,a);
        int d2=distance(root,b);
        Node*lca=findLCA(root,a,b);
        int d3=distance(root,lca->data);
        return d1+d2-2*d3;
    }
