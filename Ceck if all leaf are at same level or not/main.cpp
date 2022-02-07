/* We maintain a pair in queue where it first holds a node value and then its level
   the leaf nodes are then mapped to the map using node->data as its first value and level as its second
   the queue is traversed till it becomes empty then the level value of the first value of the map is taken and
   compared to the other value's level if all the root are at same level then all the values will be same otherwise
   flag will be changed to 0 and then false will be returned

   @Author: RAUNAQ SINGH
*/
bool isLeaf(Node*root){
        if(root->left==NULL && root->right==NULL){
            return true;
        }
        return false;
    }
    bool check(Node *root)
    {
        if(root==NULL){
            return true;
        }
        int leaf=0,flag=1;
        map<int,int> mpp;
        queue<pair<Node*,int>> q;
        q.push({root,0});
        while(q.empty()==false){
            auto it=q.front();
            q.pop();
            Node*node=it.first;
            int level=it.second;
            if(isLeaf(node)){
                mpp[node->data]=level;
                leaf++;
            }
            if(node->left!=NULL){
                q.push({node->left,level+1});
            }
            if(node->right!=NULL){
                q.push({node->right,level+1});
            }
        }
        auto num=mpp.begin();
        int value=num->second;
        for(auto it=mpp.begin();it!=mpp.end();it++){
            if(it->second!=value){
                flag=0;
                break;
            }
        }
        if(flag==1){
            return true;
        }
        return false;
    }
