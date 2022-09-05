//@Author: RAUNAQ SINGH
//Leetcode Question # 429
/*Concept Used: It is similar to level order traversal of a binary tree but the only difference being that
                in the for loop we will also have another for loop with the condition Node*child:temp->children
                this will then push the n children of the  current node in the queue for further consideration
*/
class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        if(root==NULL) return {};
        vector<vector<int>> ans;
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            vector<int> v;
            for(int i=0;i<n;i++){
                Node*temp=q.front();
                q.pop();
                v.push_back(temp->val);
                for(Node*child:temp->children) q.push(child);
            }
            ans.push_back(v);
        }
        return ans;
    }
};
