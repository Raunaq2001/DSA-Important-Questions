    //https://practice.geeksforgeeks.org/problems/print-adjacency-list-1587115620/1
    //@Author: RAUNAQ SINGH
    vector<vector<int>> printGraph(int V, vector<int> adj[]) {
        vector<vector<int>> ans;
        for(int i=0;i<V;i++){
            vector<int> v;
            v.push_back(i);
            for(auto &it:adj[i]){
                v.push_back(it);
            }
            ans.push_back(v);
        }
        return ans;
    }
