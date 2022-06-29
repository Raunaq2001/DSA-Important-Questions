//Leetcode question # 62
    //https://takeuforward.org/data-structure/grid-unique-paths-count-paths-from-left-top-to-the-right-bottom-of-a-matrix/ (See approach 1)
    // m -> rows
    // n -> column
    // i -> column
    // j -> rows
    int countPath(int i,int j,int m,int n){
        if(i==(n-1) || j==(m-1)) return 1;
        else if(i>=n || j>=m) return 0;
        else return countPath(i+1,j,m,n)+countPath(i,j+1,m,n);
    }
    int uniquePaths(int m, int n) {
        return countPath(0,0,m,n);
    }
