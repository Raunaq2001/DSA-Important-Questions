bool findPath(TreeNode*root,vector<int> &v,int target){
     if(root==NULL){
         return false;
     }
     v.push_back(root->val);
     if(root->val==target){
         return true;
     }
     if(findPath(root->left,v,target) || findPath(root->right,v,target)){
         return true;
     }
     v.pop_back();
     return false;
 }
vector<int> Solution::solve(TreeNode* A, int B) {
    if(A==NULL){
        return {};
    }
    vector<int> v;
    int flag=0;
    findPath(A,v,B);
    return v;
}
