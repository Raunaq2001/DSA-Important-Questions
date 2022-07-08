vector <int> zigZagTraversal(Node* root)
    {
        if(root==NULL) {
            return {};
        }
        vector<int> ans;
        queue<Node *> q;
        q.push(root);
        bool flag=false;
        while(q.empty()==false){
            int size=q.size();
            vector<int> temp;
            for(int i=0;i<size;i++){
                Node*node=q.front();
                q.pop();
                temp.push_back(node->data);
                if(node->left!=NULL){
                    q.push(node->left);
                }
                if(node->right!=NULL){
                    q.push(node->right);
                }
            }
            flag=!flag;
            if(flag==false){
                reverse(temp.begin(),temp.end());
            }
            for(int i=0;i<temp.size();i++){
                ans.push_back(temp[i]);
            }
        }
        return ans;
    }



//Leetcode question # 103
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root==NULL) return {};
        vector<vector<int>> ans;
        bool flag=false;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            vector<int> v;
            for(int i=0;i<n;i++){
                TreeNode * temp=q.front();
                q.pop();
                v.push_back(temp->val);
                if(temp->left!=NULL) q.push(temp->left);
                if(temp->right!=NULL) q.push(temp->right);
            }
            if(flag){
                reverse(v.begin(),v.end());
            }
            flag=!flag;
            ans.push_back({v});
        }
        return ans;
    }
