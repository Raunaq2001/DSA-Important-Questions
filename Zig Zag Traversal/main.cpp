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
