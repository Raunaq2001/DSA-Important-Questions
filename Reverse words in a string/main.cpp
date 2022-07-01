//Leetcode question # 151
//@Author: RAUNAQ SINGH
    string reverseWords(string s) {
        stack<string> stk;
        string ans="";
        s=s+" ";
        for(int i=0;i<s.length();i++){
            if(s[i]==' ' && ans.size()==0) continue;
            if(s[i]==' '){
                stk.push(ans);
                ans="";
            }
            else{
                ans=ans+s[i];
            }
        }
        ans="";
        while(stk.size()!=1){
            ans=ans+stk.top()+" ";
            stk.pop();
        }
        ans=ans+stk.top();
        stk.pop();
        return ans;
    }
