    //Leetcode question # 463
    //Algorithm Used: DFS
    void getParameter(int i,int j,vector<vector<int>> &grid,int &ans){
        if(i==-1 || j==-1 || i==grid.size() || j==grid[0].size() || grid[i][j]==0){
            ans++;
            return;
        }
        if(grid[i][j]==1) return;
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        int ans=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]==1){
                    getParameter(i-1,j,grid,ans);
                    getParameter(i+1,j,grid,ans);
                    getParameter(i,j-1,grid,ans);
                    getParameter(i,j+1,grid,ans);
                }
            }
        }
        return ans;
    }
