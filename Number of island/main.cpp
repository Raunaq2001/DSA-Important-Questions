    /*
    Approach: The given problem can be solved easily using Depth First Search Algorithm(DFS) on each component. Depth First Search Algorithm is a     recursive algorithm that uses backtracking to search all the nodes of the graph by going ahead if the potential node is found, else use the       backtracking approach. When DFS is called, a component of the undirect graph is visited. After the complete iteration, we will call DFS again     on the next un-visited component. Therefore, the number of calls of DFS gives the total number of connected components of the graph.

    Now comparing the connected components of an undirected graph with the "Number of island" problem, the node of the graph will be the “1’s”         (land) in the matrix. We will call the depth-first search algorithm on the ‘1's’ of the matrix. Later during the DFS call, every visited cell     of the matrix is set as ‘0’ to mark it as a visited node. At last, count the number of total DFS calls, which indicates the total number of       islands since each DFS call starts when a new island is identified.
    */
    //Algorithm Used: DFS
    //https://favtutor.com/coding-problems/number-of-islands
    //Leetcode question # 200
    void DFS(int i,int j,int row,int col,vector<vector<char>> &grid){
        if(i<0 || j<0 || i>row-1 || j>col-1 || grid[i][j]!='1') return;
        if(grid[i][j]=='1'){
            grid[i][j]='0';
            DFS(i+1,j,row,col,grid);
            DFS(i-1,j,row,col,grid);
            DFS(i,j+1,row,col,grid);
            DFS(i,j-1,row,col,grid);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int row=grid.size(),col=grid[0].size(),counter=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]=='1'){
                    counter++;
                    grid[i][j]='0';
                    DFS(i+1,j,row,col,grid);
                    DFS(i-1,j,row,col,grid);
                    DFS(i,j+1,row,col,grid);
                    DFS(i,j-1,row,col,grid);
                }
            }
        }
        return counter;
    }
