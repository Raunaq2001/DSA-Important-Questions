//Leetcode question # 199 || Code Studios question # 22
//https://takeuforward.org/data-structure/right-left-view-of-binary-tree
vector<int> leftView(Node *root)
{
   vector<int> list;
   queue<Node*> q;
   if(root==NULL){
       return list;
   }
   q.push(root);
   while(!q.empty()){
       int n=q.size();
       for(int i=1;i<=n;i++){
           Node*temp=q.front();
           q.pop();
           if(i==1){
               list.push_back(temp->data);
           }
           if(temp->left!=NULL){
               q.push(temp->left);
           }
           if(temp->right!=NULL){
               q.push(temp->right);
           }
       }
   }
   return list;
}
