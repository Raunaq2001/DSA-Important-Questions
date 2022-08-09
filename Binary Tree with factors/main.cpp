    //https://haren-lin-1.gitbook.io/leetcode-training/untitled/823.-binary-trees-with-factors
    //https://www.youtube.com/watch?v=clAMBGnv2UY&ab_channel=CodeWithSunny
    //Leetcode question # 823
    /*
        The map::count() is a built-in function in C++ STL which returns 1 if the element with key K is present in the map container. It returns 0 if         the element with key K is not present in the container.
    */
    int numFactoredBinaryTrees(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        long long res=0,mod=pow(10,9)+7;
        unordered_map<int,long> mpp;
        for(int i=0;i<arr.size();i++){
            mpp[arr[i]]=1;
            for(int j=0;j<i;j++){
                if(arr[i]%arr[j]==0 && mpp.count(arr[i]/arr[j])){
                    mpp[arr[i]]=mpp[arr[i]]+(mpp[arr[j]]*mpp[arr[i]/arr[j]])%mod;
                }
            }
        }
        for(auto it:mpp){
            res=res+it.second;
        }
        return res%mod;
    }
