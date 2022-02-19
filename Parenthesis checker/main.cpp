bool ispar(string str)
    {
        stack<char> stk;
        char ch;
        for(int i=0;i<str.length();i++){
            if(str[i]=='('||str[i]=='['||str[i]=='{'){
                stk.push(str[i]);
                continue;
            }
            if(stk.empty()==true){
                return false;
            }
            switch(str[i]){
                case ')':
                    ch=stk.top();
                    stk.pop();
                    if(ch=='{' || ch=='['){
                        return false;
                    }
                    break;

                case ']':
                    ch=stk.top();
                    stk.pop();
                    if(ch=='{' || ch=='('){
                        return false;
                    }
                    break;

                case '}':
                    ch=stk.top();
                    stk.pop();
                    if(ch=='(' || ch=='['){
                        return false;
                    }
                    break;
            }
        }
        return (stk.empty());
    }
