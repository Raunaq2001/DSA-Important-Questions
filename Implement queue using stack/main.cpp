//Leetcode question # 232
stack<int> stk;
    stack<int> ans;
    void push(int x) {
        while(!stk.empty()){
            int num=stk.top();
            stk.pop();
            ans.push(num);
        }
        stk.push(x);
        while(!ans.empty()){
            int num=ans.top();
            ans.pop();
            stk.push(num);
        }
    }
    int pop() {
        int num=stk.top();
        stk.pop();
        return num;
    }
    int peek() {
        return stk.top();
    }

    bool empty() {
        if(stk.size()==0){
            return true;
        }
        return false;
    }
