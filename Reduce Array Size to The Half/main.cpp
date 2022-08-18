    //Leetcode question # 1338
    //@Author: RAUNAQ SINGH
    /* Concept Used: Simple store the count of each element in a map, then store the frequency
                     fron that map i.e. it.second in a vector. Sort that vector reverse it and
                     then run a loop from 0, also initialize a variable named sum=0 now for
                     each frequency add it to the sum and keep doing this till the time
                     sum becomes >= to half of the given array size and when this condition
                     becomes true return i+1. i+1 because the loop is running from 0.
    */
    int minSetSize(vector<int>& arr) {
        if(arr.size()==0 || arr.size()==1) return arr.size();
        int size=arr.size(),targetSize=arr.size()/2,ans=0,sum=0;
        map<int,int> mpp;
        vector<int> temp;
        for(int i=0;i<arr.size();i++) mpp[arr[i]]++;
        if(mpp.size()==1) return 1;
        for(auto it:mpp) temp.push_back(it.second);
        sort(temp.begin(),temp.end());
        reverse(temp.begin(),temp.end());
        for(int i=0;i<temp.size();i++){
            sum=sum+temp[i];
            if(sum>=targetSize) return i+1;
        }
        return -1;
    }
