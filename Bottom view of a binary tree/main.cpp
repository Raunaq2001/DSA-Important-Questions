vector <int> bottomView(Node *root) {
        vector<int> v;
        map<int,int> mpp;
        queue<pair<Node*,int>> q;
        if(root==NULL){
            return v;
        }
        q.push({root,0});
        while(q.empty()==false){
            auto it=q.front();
            q.pop();
            Node* node=it.first;
            int lineNo=it.second;
            mpp[lineNo]=node->data;
            if(node->left!=NULL){
                q.push({node->left,lineNo-1});
            }
            if(node->right!=NULL){
                q.push({node->right,lineNo+1});
            }
        }
        for(auto it:mpp){
            v.push_back(it.second);
        }
        return v;
    }
