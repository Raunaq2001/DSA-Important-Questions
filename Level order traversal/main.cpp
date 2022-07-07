//Code Studios question # 31
//https://takeuforward.org/data-structure/level-order-traversal-of-a-binary-tree
    vector<int> levelOrder(Node* node)
    {
      vector<int> list;
      queue<Node*> q;
      if(node==NULL){
          return list;
      }
      q.push(node);
      while(q.empty()==false){
          Node*node=q.front();
          list.push_back(node->data);
          q.pop();
          if(node->left!=NULL){
              q.push(node->left);
          }
          if(node->right!=NULL){
              q.push(node->right);
          }
      }
      return list;
    }
