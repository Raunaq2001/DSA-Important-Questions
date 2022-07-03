//Leetcode question # 73
//https://takeuforward.org/data-structure/set-matrix-zero (Approach 2)
    void setZeroes(vector<vector<int>>& matrix) {
        int rows=matrix.size();
        int column=matrix[0].size();
        vector<int> r(rows,-1),c(column,-1);
        for(int i=0;i<rows;i++){
            for(int j=0;j<column;j++){
                if(matrix[i][j]==0){
                    r[i]=0;
                    c[j]=0;
                }
            }
        }
        for(int i=0;i<rows;i++){
            for(int j=0;j<column;j++){
                if(r[i]==0 || c[j]==0){
                    matrix[i][j]=0;
                }
            }
        }
    }
