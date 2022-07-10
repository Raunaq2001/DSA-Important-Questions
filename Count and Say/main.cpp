//Leetcode question # 38
//https://www.youtube.com/watch?v=1YUqtoT9YoE&t=225s&ab_channel=CodeLibrary-byYogesh%26Shailesh
    string countAndSay(int n) {
        if(n==1) return "1";
        if(n==2) return "11";
        string s="11";
        for(int i=3;i<=n;i++){
            string t="";
            s=s+'&';
            int ctr=1;
            for(int j=1;j<s.size();j++){
                if(s[j]!=s[j-1]){
                    t=t+to_string(ctr);
                    t=t+s[j-1];
                    ctr=1;
                }
                else{
                    ctr++;
                }
            }
            s=t;
        }
        return s;
    }
.
