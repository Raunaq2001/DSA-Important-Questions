#define maxSize 100
class Stack{
    private:
        int top;
        int topMin;
        int stk[maxSize];
        int minStk[maxSize];
    public:
       Stack(){
        top-1;
        topMin=-1;
       }
       void push(int num){
        if(top==maxSize-1){
            cout<<"Overflow";
            return;
        }
        top++;
        stk[top]=num;
        if(topMin==-1){
            topMin++;
            minStk[topMin]=num;
        }
        else{
            int temp=minStk[topMin];
            topMin++;
            minStk[topMin]=min(temp,num);
        }
       }
       void pop(){
        if(top<0){
            cout<<"Underflow";
            return;
        }
        cout<<"Element to be popped = "<<stk[top];
        top--;
        topMin--;
       }
       int getMin(){
        if(topMin<0){
            cout<<"Underflow";
            return -1;
        }
        return minStk[topMin];
       }
};
