//Leetcode question # 122
//https://www.youtube.com/watch?v=Q7v239y-Tik&list=PLUcsbZa0qzu3yNzzAxgvSgRobdUUJvz7p&index=15&ab_channel=AnujBhaiya
int maxProfit(vector<int>& prices) {
        int profit=0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]>prices[i-1]){
                profit=profit+(prices[i]-prices[i-1]);
            }
        }
        return profit;
    }
