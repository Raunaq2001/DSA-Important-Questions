       //O(1) time and O(1) space complexity
       //https://www.youtube.com/watch?v=QMlDCR9xyd8&t=2s&ab_channel=TECHDOSE
       int minEle;
       stack<int> s;
       int getMin(){
           if(s.empty()) return -1;
           return minEle;
       }
       int pop(){
           if(s.empty()) return -1;
           int topEle=s.top();
           s.pop();
           if(topEle>=minEle) return topEle;
           else{
               int num=minEle;
               minEle=2*minEle-topEle;
               return num;
           }
       }
       void push(int x){
           if(s.empty()){
               s.push(x);
               minEle=x;
           }
           else if(x>=minEle) s.push(x);
           else{
               s.push(2*x-minEle);
               minEle=x;
           }
       }
