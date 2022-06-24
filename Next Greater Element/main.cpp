//Leetcode question # 496
int findIndex(int targetElement,vector<int> nums2){
        int index;
        for(int i=0;i<nums2.size();i++){
            if(nums2[i]==targetElement){
                index=i;
                break;
            }
        }
        return index;
    }
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int flag=-999;
        for(int i=0;i<nums1.size();i++){
            int targetElement=nums1[i];
            int index=findIndex(targetElement,nums2);
            flag=-999;
            for(int j=index+1;j<nums2.size();j++){
                if(nums2[j]>targetElement){
                    flag=1;
                    ans.push_back(nums2[j]);
                    break;
                }
            }
            if(flag!=1){
                ans.push_back(-1);
            }
        }
        return ans;
    }
