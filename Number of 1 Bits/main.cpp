    //Leetcode question # 191
    //@Author: RAUNAQ SINGH
    int hammingWeight(uint32_t n) {
        vector<int> v(32,0);
        int i=31;
        while(n!=0){
            if(n%2==0){
                v[i]=0;
            }
            else{
                v[i]=1;
            }
            i--;
            n=n/2;
        }
        int counter=0;
        for(int i=0;i<v.size();i++){
            if(v[i]==1) counter++;
        }
        return counter;
    }
