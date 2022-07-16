/*
    //Leetcode question # 295
    //@Author: RAUNAQ SINGH
    //This brute force method passes 16/21 test cases before it throws TLE
    vector<int> v;
    int size;
    MedianFinder() {
        size=0;
    }

    void addNum(int num) {
        v.push_back(num);
        size++;
        if(size>=2) sort(v.begin(),v.end());
    }

    double findMedian() {
        double ans;
        if(size%2==0){
            int n1=size/2-1;
            int n2=size/2;
            ans=(double)(v[n1]+v[n2])/2;
        }
        else{
            int n=floor(size/2);
            ans=v[n];
        }
        return ans;
    }
    */
    //https://www.youtube.com/watch?v=Yv2jzDzYlp8&ab_channel=AnujBhaiya
    priority_queue<double> maxHeap;
    priority_queue<double,vector<double>,greater<double>> minHeap;
    MedianFinder() {

    }
    void addNum(int num) {
        if(maxHeap.empty() || maxHeap.top()>num) maxHeap.push(num);
        else minHeap.push(num);
        if(maxHeap.size()>minHeap.size()+1){
            int temp=maxHeap.top();
            maxHeap.pop();
            minHeap.push(temp);
        }
        else if(maxHeap.size()<minHeap.size()){
            int temp=minHeap.top();
            minHeap.pop();
            maxHeap.push(temp);
        }
    }
    double findMedian() {
        if(maxHeap.size()==minHeap.size()) return (maxHeap.top()+minHeap.top())/2;
        return maxHeap.top();
    }
