vector<int> reverseLevelOrder(Node *root)
{
    vector<int> list;
    queue<Node*> q;
    if(root==NULL){
        return list;
    }
    q.push(root);
    while(q.empty()==false){
        Node*node=q.front();
        list.push_back(node->data);
        q.pop();
        if(node->right!=NULL){
            q.push(node->right);
        }
        if(node->left!=NULL){
            q.push(node->left);
        }
    }
    reverse(list.begin(),list.end());
    return list;
}
