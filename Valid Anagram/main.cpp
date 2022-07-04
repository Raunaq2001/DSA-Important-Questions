//Leetcode question # 242
//@Author: RAUNAQ SINGH
    bool isAnagram(string s, string t) {
        if(t.size()==0 || s.size()!=t.size()) return false;
        map<char,int> mpp;
        int flag=1;
        for(int i=0;i<s.size();i++){
            mpp[s[i]]++;
        }
        for(int i=0;i<t.size();i++){
            if(mpp.find(t[i])!=mpp.end()){
                mpp[t[i]]--;
            }
        }
        for(auto &it:mpp){
            if(it.second!=0){
                flag=0;
                break;
            }
        }
        if(flag==1) return true;
        return false;
    }
