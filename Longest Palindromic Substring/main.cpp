//Leetcode question # 5
//https://www.geeksforgeeks.org/longest-palindrome-substring-set-1  (Approach 2)
//https://www.youtube.com/watch?v=UflHuQj6MVA&ab_channel=TECHDOSE (Probably the best possible explanation)
    string longestPalindrome(string s) {
        int maxLength=1,start=0,n=s.size();
        string ans="";
        bool dp[n][n];
        memset(dp,0,sizeof(dp));
        for(int i=0;i<n;i++){
            dp[i][i]=true;
        }
        for(int i=0;i<n;i++){
            if(s[i]==s[i+1]){
                maxLength=2;
                start=i;
                dp[i][i+1]=true;
            }
        }
        for(int k=3;k<=n;k++){
            for(int i=0;i<n-k+1;i++){
                int j=i+k-1;
                if(s[i]==s[j] && dp[i+1][j-1]){
                    dp[i][j]=true;
                    if(k>maxLength){
                        maxLength=k;
                        start=i;
                    }
                }
            }
        }
        for(int i=start;i<start+maxLength;i++){
            ans=ans+s[i];
        }
        return ans;
    }
