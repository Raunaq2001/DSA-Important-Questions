    //Concept used: Pascle Triangle I
    //@Author: RAUNAQ SINGH
    //https://leetcode.com/problems/pascals-triangle
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> r(rowIndex+1);
        for(int i=0;i<rowIndex+1;i++){
            r[i].resize(i+1);
            r[i][0]=r[i][i]=1;
            for(int j=1;j<i;j++){
                r[i][j]=r[i-1][j-1]+r[i-1][j];
            }
        }
        return r[rowIndex];
    }
