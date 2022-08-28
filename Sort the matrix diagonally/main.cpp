    //https://walkccc.me/LeetCode/problems/1329
    //Leetcode question # 1329
    /* Concept Used: Create an unordered_map with properties int,priority_queue<int>, run one for loop from i=0
                     to less than row and another inner loop from j=0 to less than col, create indexes in
                     the priority_queue as i-j and save the element.

                     Now run another for loop from i=row-1 till i>=0 and an another inner loop from j=col-1 to
                     j>=0 and from indexes i-j pick the top element and then pop it from the priority_queue

    */
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int row=mat.size(),col=mat[0].size();
        unordered_map<int,priority_queue<int>> count;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                count[i-j].push(mat[i][j]);
            }
        }
        for(int i=row-1;i>=0;i--){
            for(int j=col-1;j>=0;j--){
                mat[i][j]=count[i-j].top();
                count[i-j].pop();
            }
        }
        return mat;
    }
