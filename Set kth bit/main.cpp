    //https://practice.geeksforgeeks.org/problems/set-kth-bit3724/1?page=2&company[]=Cisco&sortBy=submissions
    //@Author: RAUNAQ SINGH
    int setKthBit(int N, int K)
    {
        vector<int> v;
        while(N>0){
            v.push_back(N%2);
            N=N/2;
        }
        reverse(v.begin(),v.end());
        v[v.size()-(K+1)]=1;
        reverse(v.begin(),v.end());
        int ans=0,j=0;
        for(int i=0;i<v.size();i++){
            ans=ans+(v[i]*pow(2,j));
            j++;
        }
        return ans;
    }
