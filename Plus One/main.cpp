    //Leetcode question #66
    //@Author: RAUNAQ SINGH
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans;
        int sum=0,carry=0;
        reverse(digits.begin(),digits.end());
        for(int i=0;i<digits.size();i++){
            sum=sum+carry+digits[i];
            if(i==0) sum++;
            carry=sum/10;
            sum=sum%10;
            ans.push_back(sum);
            sum=0;
        }
        if(carry){
            ans.push_back(carry);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
