    //Leetcode question # 125
    //@Author: RAUNAQ SINGH
    bool isPalindrome(string s) {
        vector<char> ans;
        char ch;
        for(int i=0;i<s.size();i++){
            if((s[i]>='A' && s[i]<='Z') ||(s[i]>='a' && s[i]<='z') ||(s[i]>='0' && s[i]<='9') ){
                ch=s[i];
                if(s[i]>='A' && s[i]<='Z'){
                    ch=tolower(s[i]);
                    ans.push_back(ch);
                }
                else{
                    ans.push_back(ch);
                }
            }
        }
        vector<char> cpy=ans;
        reverse(ans.begin(),ans.end());
        if(ans==cpy) return true;
        return false;
    }
