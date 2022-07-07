//Leetcode question # 199
//https://takeuforward.org/data-structure/right-left-view-of-binary-tree
vector<int> rightView(Node *root)
    {
       vector<int> list;
       queue<Node*> q;
       if(root==NULL){
           return list;
       }
       q.push(root);
       while(q.empty()==false){
           int n=q.size();
           for(int i=1;i<=n;i++){
               Node*temp=q.front();
               q.pop();
               if(i==1){
                   list.push_back(temp->data);
               }
               if(temp->right!=NULL){
                   q.push(temp->right);
               }
               if(temp->left!=NULL){
                   q.push(temp->left);
               }
           }
       }
       return list;
    }
