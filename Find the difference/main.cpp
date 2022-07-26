    //Leetcode question # 389
    //@Author: RAUNAQ SINGH
    char findTheDifference(string s, string t) {
        int val1=0,val2=0;
        char ans;
        for(int i=0;i<s.size();i++) val1=val1+(int)s[i];
        for(int i=0;i<t.size();i++) val2=val2+(int)t[i];
        ans=(char)abs(val1-val2);
        return ans;
    }
