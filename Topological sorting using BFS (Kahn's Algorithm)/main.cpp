	//Using BFS
	//Kahn's Algorithm
	//https://www.youtube.com/watch?v=rZv_jHZva34&list=PLgUwDviBIf0rGEWe64KWas0Nryn7SCRWw&index=13&ab_channel=takeUforward
	vector<int> topoSort(int V, vector<int> adj[]){
	    vector<int> inDegree(V,0),ans;
	    queue<int> q;
	    for(int i=0;i<V;i++){
	        for(auto it:adj[i]) inDegree[it]++;
	    }
	    for(int i=0;i<V;i++){
	        if(inDegree[i]==0) q.push(i);
	    }
	    while(!q.empty()){
	        int node=q.front();
	        q.pop();
	        ans.push_back(node);
	        for(auto it:adj[node]){
	            inDegree[it]--;
	            if(inDegree[it]==0) q.push(it);
	        }
	    }
	    return ans;
	}
