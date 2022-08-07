    //Leetcode question # 326
    //@Author:RAUNAQ SINGH
    //Approach 1: Simple approach just keep multiplying 3 till its less than the given number then check if the
    //            product that we have is equal to the given number or not, if it is equal then return true else false
    /*bool isTrue(int x,int y){
        long long pow=1;
        while(pow<y) pow=pow*x;
        return (pow==y);
    }
    bool isPowerOfThree(int n) {
        if(n==0) return false;
        if(isTrue(3,n)) return true;
        return false;
    }*/
    //Approach 2: Reccursive approach, in this we check if the given number is <=0 if it is then we return a false as it can never be the
    //            the power of 3, then we check if num%3 is equal to 0 then we reccursively call the function but pass n/3 in the argument
    //            then if a situation comes where in n%3 is not eual to 0 then check if n==1, if it is then return true else return false
    bool isPowerOfThree(int n){
        if(n<=0) return false;
        if(n%3==0) return isPowerOfThree(n/3);
        if(n==1) return true;
        return false;
    }
