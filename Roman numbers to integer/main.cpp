//Leetcode question # 13
//@Author: RAUNAQ SINGH
    int romanToInt(string s) {
        unordered_map<char,int> mpp;
        mpp.insert({'I',1});
        mpp.insert({'V',5});
        mpp.insert({'X',10});
        mpp.insert({'L',50});
        mpp.insert({'C',100});
        mpp.insert({'D',500});
        mpp.insert({'M',1000});
        int val1=0,val2=0,ans=0;
        if(s.size()==1){
            for(auto &it:mpp){
                if(it.first==s[0]) ans=it.second;
            }
            return ans;
        }
        char prev=s[0];
        for(int i=1;i<s.size();i++){
            char text=s[i];
            for(auto &it: mpp){
                if(it.first==prev) val1=it.second;
                if(it.first==text) val2=it.second;
            }
            if(val1>=val2){
                ans=ans+val1;
            }
            else{
                ans=ans-val1;
            }
            prev=s[i];
        }
        ans=ans+val2;
        return ans;
    }
