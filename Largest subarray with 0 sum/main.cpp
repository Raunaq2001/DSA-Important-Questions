int maxLen(vector<int>&A, int n)
    {
        int maxLength=0;
        for(int i=0;i<A.size();i++){
            int sum=0;
            for(int j=i;j<A.size();j++){
                sum=sum+A[j];
                if(sum==0){
                    maxLength=max(maxLength,j-i+1);
                }
            }
        }
        return maxLength;
    }
