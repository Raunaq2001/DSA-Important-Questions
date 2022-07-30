    //Leetcode question # 4
    //@Author: RAUNAQ SINGH
    void getSortedVectors(vector<int> v1,vector<int> v2,vector<int> &final){
        int i=0,j=0;
        while(i<v1.size() && j<v2.size()){
            if(v1[i]<=v2[j]){
                final.push_back(v1[i]);
                i++;
            }
            else{
                final.push_back(v2[j]);
                j++;
            }
        }
        while(i<v1.size()){
            final.push_back(v1[i]);
            i++;
        }
        while(j<v2.size()){
            final.push_back(v2[j]);
            j++;
        }
    }
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> temp;
        double ans=0.0;
        getSortedVectors(nums1,nums2,temp);
        if(temp.size()%2!=0) ans=(double)temp[temp.size()/2];
        else{
            ans=(double)(temp[temp.size()/2-1]+temp[temp.size()/2])/2;
        }
        return ans;
    }
