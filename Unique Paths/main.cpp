//Leetcode question # 62
    //https://takeuforward.org/data-structure/grid-unique-paths-count-paths-from-left-top-to-the-right-bottom-of-a-matrix/ (See approach 1)
    // m -> rows
    // n -> column
    // i -> column
    // j -> rows
    /*int countPath(int i,int j,int m,int n){
        if(i==(n-1) || j==(m-1)) return 1;
        else if(i>=n || j>=m) return 0;
        else return countPath(i+1,j,m,n)+countPath(i,j+1,m,n);
    }
    int uniquePaths(int m, int n) {
        return countPath(0,0,m,n);
    }*/
    int uniquePaths(int m, int n){
        long long int dp[m][n];
        dp[0][0]=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0 || j==0) dp[i][j]=1;
                else dp[i][j]=(dp[i-1][j]+dp[i][j-1]);
            }
        }
        return dp[m-1][n-1];
    }
