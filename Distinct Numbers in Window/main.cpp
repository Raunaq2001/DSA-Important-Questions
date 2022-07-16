//Interview Bit Question: https://www.interviewbit.com/problems/distinct-numbers-in-window
//https://www.geeksforgeeks.org/count-distinct-elements-in-every-window-of-size-k
//https://www.youtube.com/watch?v=j48e8ac7r20&t=1s&ab_channel=AnujBhaiya
vector<int> Solution::dNums(vector<int> &A, int B) {
    if(B>A.size()) return {};
    if(B==1){
        vector<int> ans(A.size()-B+1,1);
        return ans;
    }
    vector<int> ans;
    unordered_map<int,int> mpp;
    int distCount=0;
    for(int i=0;i<B;i++){
        if(mpp[A[i]]==0) distCount++;
        mpp[A[i]]++;
    }
    ans.push_back(distCount);
    for(int i=B;i<A.size();i++){
        if(mpp[A[i-B]]==1){
            distCount--;
        }
        mpp[A[i-B]]=mpp[A[i-B]]-1;
        if(mpp[A[i]]==0) distCount++;
        mpp[A[i]]++;
        ans.push_back(distCount);
    }
    return ans;
}
