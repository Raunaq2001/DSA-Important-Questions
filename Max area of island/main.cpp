    //@Author: RAUNAQ SINGH
    //Algorithm Used: DFS
    //Concept: Just as we count number of island, in this case when converting 1 to 0 we will also count the number of time we did that and after every return fron the DFS function we will assign max with the max value amongst what max already has and what temp has become and finally return the answer.
    void DFS(int i,int j,vector<vector<int>> &grid,int &temp){
        if(i==-1 || j==-1 || i==grid.size() || j==grid[0].size() || grid[i][j]==0) return;
        if(grid[i][j]==1){
            temp++;
            grid[i][j]=0;
            DFS(i+1,j,grid,temp);
            DFS(i-1,j,grid,temp);
            DFS(i,j+1,grid,temp);
            DFS(i,j-1,grid,temp);
        }
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ans=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                    int temp=1;
                    grid[i][j]=0;
                    DFS(i+1,j,grid,temp);
                    DFS(i-1,j,grid,temp);
                    DFS(i,j+1,grid,temp);
                    DFS(i,j-1,grid,temp);
                    ans=max(ans,temp);
                }
            }
        }
        return ans;
    }
