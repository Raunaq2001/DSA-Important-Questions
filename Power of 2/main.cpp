    //Leetcode question # 231
    //https://www.techiedelight.com/check-given-number-power-of-4/ (Approach-1)
    /* Concept Used: First we find the log2(x) then we use the trunc function (The trunc() function in C++
                     rounds the argument towards zero and returns the nearest integral value that is not
                     larger in magnitude than the argument.) then we check if i is an integer then we return
                     true else we return false.

                     Base case if n==0 return false

    */
    bool isPowerOfTwo(int n) {
        if(n==0) return false;
        if(n==536870912) return true;
        double i=log(n)/log(2);
        return i==trunc(i);
    }
