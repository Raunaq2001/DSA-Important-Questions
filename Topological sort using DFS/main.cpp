	//Using DFS
	//Topological sorting is a sorting in which for every vertex u->v, u should appear first in the final vector ans
	//https://www.youtube.com/watch?v=Yh6EFazXipA&list=PLgUwDviBIf0rGEWe64KWas0Nryn7SCRWw&index=12&ab_channel=takeUforward
	void getTopoSort(int node,stack<int> &stk,vector<int> &vis,vector<int> adj[]){
	    vis[node]=1;
	    for(auto it:adj[node]){
	        if(vis[it]==0) getTopoSort(it,stk,vis,adj);
	    }
	    stk.push(node);
	}
	vector<int> topoSort(int V, vector<int> adj[])
	{
	    vector<int> ans,vis(V,0);
	    stack<int> stk;
	    for(int i=0;i<V;i++){
	        if(vis[i]==0) getTopoSort(i,stk,vis,adj);
	    }
	    while(!stk.empty()){
	        int num=stk.top();
	        stk.pop();
	        ans.push_back(num);
	    }
	    return ans;
	}
