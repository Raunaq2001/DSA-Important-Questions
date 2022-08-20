    //Leetcode question # 871
    //https://walkccc.me/LeetCode/problems/0871/
    /* Concept Used: Here we are using priority queue as priority queue will give us the maximum
                     of the distances travelled with existing fuel. We run a outer while loop
                     till curr<target (curr initially initialized to startFuel) then in an
                     inner while loop we check how far the car can go with the existing fuel
                     also keeping in check that we do not go out of bound.
                     (i<stations.size() && curr>=stations[i][0]) if the following conditions are
                     true then we push the stations[i][1] in our maxHeap and increment i by one.
                     When this while loop becomes false then we check if our maxHeap is empty or
                     not, if it is empty then we return -1 because the car is out of fuel and
                     can't travel to the next gas station but if this is not the case then we
                     take the top of the priority queue (as this will the maximum distance
                     traveled by the curr fuel) we add it to curr indicating that this much
                     distance has been trvelled. Finally we pop the top of the maxHeap as that
                     much distance has been travelled. And next iteration of the outer while loop
                     takes place.
    */
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        int i=0,ans=0,curr=startFuel;
        priority_queue<int> maxHeap;
        sort(stations.begin(),stations.end());
        while(curr<target){
            while(i<stations.size() && curr>=stations[i][0]){
                maxHeap.push(stations[i][1]);
                i++;
            }
            if(maxHeap.empty()) return -1;
            curr=curr+maxHeap.top();
            maxHeap.pop();
            ans++;
        }
        return ans;
    }
