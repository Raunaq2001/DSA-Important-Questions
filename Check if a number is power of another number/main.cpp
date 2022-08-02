    //https://www.geeksforgeeks.org/check-if-a-number-is-power-of-another-number/
    //Concept Used: The idea is to take log of y in base x. If it turns out to be an integer, we return true. Else false.
    bool isPower(long long x,long long y){
        int res1=log(y)/log(x);
        double res2=log(y)/log(x);
        if(res1==res2) return true;
        return false;
    }
    int isPowerOfAnother(long long X, long long Y){
        if(isPower(X,Y)) return 1;
        return 0;
    }
