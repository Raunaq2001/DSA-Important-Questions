//Leetcode question # 121
//https://www.youtube.com/watch?v=34WE6kwq49U&list=PLUcsbZa0qzu3yNzzAxgvSgRobdUUJvz7p&index=14&ab_channel=AnujBhaiya
int maxProfit(vector<int>& prices) {
        int minSoFar=prices[0],maxProfit=0;
        for(int i=0;i<prices.size();i++){
            minSoFar=min(minSoFar,prices[i]);
            maxProfit=max(maxProfit,prices[i]-minSoFar);
        }
        return maxProfit;
    }
