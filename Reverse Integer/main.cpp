    //@Author: RAUNAQ SINGH
    //Leetcode Problem # 7
    //Concept used: before multiplying the rev*10 first check if the already existing value in rev is causing an overflow to occour or not, but we know that       INT_MAX = 2147483647 && INT_MIN = -2147483647 we here we check only till 214748364 and -214748364 that's because if we use the actual value of INT_MAX,       INT_MIN the system constraint that the environment is only of 32 bit wont be able to compare it so we remove one digits from the INT_MAX and INT_MIN         values
    int reverse(int num) {
        int rem=0,rev=0;
        while(num!=0){
            rem=num%10;
            num=num/10;
            if(rev>214748364 || rev<-214748364) return 0;
            rev=(rev*10)+rem;
        }
        return rev;
    }
