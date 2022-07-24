    //Leetcode question # 20
    //@Author: RAUNAQ SINGH
    bool isValid(string s) {
        stack<char> stk;
        for(int i=0;i<s.size();i++){
            if(stk.empty()) stk.push(s[i]);
            else if((stk.top()=='(' && s[i]==')') || (stk.top()=='[' && s[i]==']') || (stk.top()=='{' && s[i]=='}')) stk.pop();
            else stk.push(s[i]);
        }
        if(stk.size()==0) return true;
        return false;
    }
