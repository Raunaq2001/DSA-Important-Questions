//Leetcode question # 169
//Approach used: Moore's Voting Algorithm
//https://github.com/Raunaq2001/DSA-Important-Questions/blob/main/Moore%20Voting%20Algorithm/main.cpp
    int majorityElement(vector<int>& nums) {
        int occourance=nums.size()/2;
        int num=nums[0];
        int counter=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==num){
                counter++;
            }
            else{
                counter--;
            }
            if(counter==0){
                num=nums[i];
                counter=1;
            }
        }
        counter=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==num){
                counter++;
            }
        }
        if(counter>=occourance) return num;
        return INT_MIN;
    }
