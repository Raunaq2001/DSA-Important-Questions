    //Concept used: LCM(A,B)=(A*B)/GCD(A,B)
    //https://www.geeksforgeeks.org/c-program-find-gcd-hcf-two-numbers
    long long getGCD(long long a,long long b){
        long long result=min(a,b);
        while(result>0){
            if(a%result==0 && b%result==0) break;
            result--;
        }
        return result;
    }
    vector<long long> lcmAndGcd(long long A , long long B) {
        vector<long long> ans;
        long long GCD=getGCD(A,B);
        long long LCM=(A*B)/GCD;
        ans.push_back(LCM);
        ans.push_back(GCD);
        return ans;
    }
