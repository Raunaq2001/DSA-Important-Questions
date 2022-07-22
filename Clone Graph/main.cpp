    //https://workat.tech/problem-solving/approach/cg/clone-graph (See the C++ DFS approach)
    unordered_map<int,Node*> mpp;
    Node* cloneGraphUntil(Node* root){
        Node* copyRoot=new Node(root->val);
        mpp[root->val]=copyRoot;
        for(int i=0;i<root->neighbors.size();i++){
            int value=root->neighbors[i]->val;
            if(mpp.find(value)!=mpp.end()){
                copyRoot->neighbors.push_back(mpp[value]);
            }
            else{
                Node* copyNode=cloneGraphUntil(root->neighbors[i]);
                copyRoot->neighbors.push_back(copyNode);
            }
        }
        return copyRoot;
    }
    Node* cloneGraph(Node* node) {
        if(node==NULL) return NULL;
        return cloneGraphUntil(node);
    }
