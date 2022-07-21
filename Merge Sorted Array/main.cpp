//Leetcode question # 88
//@Author: RAUNAQ SINGH
/* Problem Statement
    You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n,
    representing the number of elements in nums1 and nums2 respectively.Merge nums1 and nums2 into a single array sorted in non-decreasing order.
    The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a
    length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored.
     nums2 has a length of n.
*/
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(m==0){
            int size=nums1.size();
            while(size){
                nums1.pop_back();
                size--;
            }
            for(int i=0;i<n;i++){
                nums1.push_back(nums2[i]);
            }
        }
        else{
            if(n!=0){
                int i,temp,noOfZeros=nums1.size()-m;
            while(noOfZeros){
                nums1.pop_back();
                noOfZeros--;
            }
            for(i=0;i<m;i++){
                if(nums1[i]>nums2[0]){
                    temp=nums1[i];
                    nums1[i]=nums2[0];
                    nums2[0]=temp;
                    sort(nums2.begin(),nums2.end());
                }
            }
            for(i=0;i<n;i++){
                nums1.push_back(nums2[i]);
            }
            }
        }
    }
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
    //Approach 2
    //@Author: RAUNAQ SINGH
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n){
        if(n==0) return; //When n==0 do nothing simply return
        //When m==0 delete all the 0 elements from nums1 and push all the elements from nums2
        if(m==0){
            int size=nums1.size();
            while(size){
                nums1.pop_back();
                size--;
            }
            for(int i=0;i<n;i++){
                nums1.push_back(nums2[i]);
            }
        }
        else{
            int itr=nums1.size()-n; //Find the number of non zero elements in nums1
            for(int i=0;i<itr;i++){
                if(nums1[i]>nums2[0]){
                    swap(nums1[i],nums2[0]);
                    sort(nums2.begin(),nums2.end());
                }
            }
            int k=0;
            for(int i=itr;i<nums1.size();i++){
                nums1[i]=nums2[k];
                k++;
            }
        }
    }
