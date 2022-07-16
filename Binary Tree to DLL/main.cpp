// Utility function to create a new Tree Node
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}
void findValues(Node*root,vector<int> &v){
        if(root==NULL){
            return;
        }
        findValues(root->left,v);
        v.push_back(root->data);
        findValues(root->right,v);
    }
    Node * bToDLL(Node *root)
    {
        if(root==NULL){
            return nullptr;
        }
        Node*head=NULL,*tail=NULL,*temp;
        vector<int> v;
        findValues(root,v);
        for(auto it=v.begin();it!=v.end();it++){
            int num=*it;
            temp=newNode(num);
            if(head==NULL){
                head=tail=temp;
            }
            else{
                tail->right=temp;
                temp->left=tail;
                tail=temp;
            }
        }
        return head;
    }

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
//Leetcode question # 114
//https://takeuforward.org/data-structure/flatten-binary-tree-to-linked-list
    TreeNode*prev=NULL;
    void flatten(TreeNode* root) {
        if(root==NULL) return;
        flatten(root->right);
        flatten(root->left);
        root->right=prev;
        root->left=NULL;
        prev=root;
    }
