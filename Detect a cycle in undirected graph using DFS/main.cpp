    //@Author: RAUNAQ SINGH
    //https://practice.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1
    bool hasCycle(int node,int parent,vector<int> &vis,vector<int> adj[]){
        vis[node]=1;
        for(auto it:adj[node]){
            if(vis[it]==0){
                if(hasCycle(it,node,vis,adj)) return true;
            }
            else if(it!=parent) return true;
        }
        return false;
    }
    bool isCycle(int V, vector<int> adj[]){
        vector<int> vis(V,0);
        for(int i=0;i<V;i++){
            if(vis[i]==0){
                if(hasCycle(i,-1,vis,adj)) return true;
            }
        }
        return false;
    }
