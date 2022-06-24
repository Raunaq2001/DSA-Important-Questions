// Leetcode question # 225
queue<int> q;
    void push(int x) {
        q.push(x);
        int s=q.size();
        for(int i=0;i<s-1;i++){
            q.push(q.front());
            q.pop();
        }
    }
    int pop() {
        int n=q.front();
        q.pop();
        return n;
    }
    int top() {
        return q.front();
    }
    bool empty() {
        if(q.size()==0){
            return true;
        }
        return false;
    }
