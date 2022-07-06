//Leetcode question # 1823
//https://www.youtube.com/watchv=46zD5d9y9b4&list=PLUcsbZa0qzu3yNzzAxgvSgRobdUUJvz7p&index=9&ab_channel=AnujBhaiya
    int jos(int n,int k){
        if(n==1) return 0;
        return (jos(n-1,k)+k)%n;
    }
    int findTheWinner(int n, int k) {
        int ans=jos(n,k);
        return ans+1;
    }
