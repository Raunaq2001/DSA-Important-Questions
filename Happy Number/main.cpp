    //Leetcode question # 202
    /*
    A number will not be a Happy Number when it makes a loop in its sequence that is it touches a number in sequence which already         been touched. So to check whether a number is happy or not, we can keep a set, if the same number occurs again we flag result as       not happy.

    Approach: What we will do is that we will take a set and the we will input all the sqared values that we reveive in that set, but
              before inserting it into the set we will make sure that that number dosen't exists in that set because if it does this
              means we have to return a false as the looping will occour and we will never reach 1

              Example: n=2
                       In the set: 2,4,8,16,37,58,89,145,42,20,4 <= as soon as we encounter this 4 we will return a false
    */
    int getProduct(int n){
        int rem=0,rev=0;
        while(n!=0){
            rem=n%10;
            n=n/10;
            rev=rev+(rem*rem);
        }
        return rev;
    }
    bool isHappy(int n) {
        if(n<=0) return false;
        if(n==1) return true;
        unordered_set<int> st;
        while(1){
            n=getProduct(n);
            if(n==1) return true;
            if(st.find(n)!=st.end()) return false;
            st.insert(n);
        }
    }
