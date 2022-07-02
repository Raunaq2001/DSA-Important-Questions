//Leetcode question # 12
//https://www.youtube.com/watch?v=f_F9ItFyiEg&ab_channel=AlgorithmsMadeEasy
    string intToRoman(int num) {
        int nums[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string val[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        string ans="";
        //It is less than 13 because the size of nums[] is 13 and it can iterate over that array only
        for(int i=0;i<13;i++){
            while(num>=nums[i]){
                ans=ans+val[i];
                num=num-nums[i];
            }
        }
        return ans;
    }
