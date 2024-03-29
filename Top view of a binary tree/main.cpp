//Code Studios question # 37
//https://takeuforward.org/data-structure/top-view-of-a-binary-tree
vector<int> topView(Node *root)
    {
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
            Node*temp=it.first;
            int lineNo=it.second;
            //If that lineNo doesnt exist in that map then add it
            if(mpp.find(lineNo)==mpp.end()){
                mpp[lineNo]=temp->data;
            }
            if(temp->left!=NULL){
                q.push({temp->left,lineNo-1});
            }
            if(temp->right!=NULL){
                q.push({temp->right,lineNo+1});
            }
        }
        for(auto it:mpp){
            v.push_back(it.second);
        }
        return v;
    }
