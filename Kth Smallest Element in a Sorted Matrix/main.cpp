    //@Author: RAUNAQ SINGH
    //Concept used: K-th largest element -> min heap
    //              K-th smallest element -> max Heap
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int> maxHeap;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                maxHeap.push(matrix[i][j]);
                if(maxHeap.size()>k) maxHeap.pop();
            }
        }
        return maxHeap.top();
    }
