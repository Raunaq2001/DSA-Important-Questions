// This algorithm is used to solve Largest Sum Contiguous Subarray problem
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec;
    int size;
    cout<<"Enter the array size = ";
    cin>>size;
    cout<<"Enter the array elements = ";
    for(int i=0;i<size;i++){
        int num;
        cin>>num;
        vec.push_back(num);
    }
    cout<<"Maximum sum sub-array = ";
    int max_ending_here=0,max_so_far=0;
    for(int i=0;i<size;i++){
        max_ending_here=max_ending_here+vec.at(i);
        if(max_ending_here>max_so_far){
            max_so_far=max_ending_here;
        }
        if(max_ending_here<0){
            max_ending_here=0;
        }
    }
    cout<<max_so_far;
    return 0;
}

NOTE: The above problem works only if the array contains all the elements that are greater than or equal to zero.
      Below is the optimized approach which will work for all types of arrays all positive,all negative, mix.
    
//Code solution by Raunaq Singh
int maxSubArray(vector<int>& nums) {
        int maxTillNow=0,maxSoFar=0;
        for(int i=0;i<nums.size();i++){
            if(maxTillNow<0){
                maxTillNow=0;
            }
            if(maxTillNow>maxSoFar){
                maxSoFar=maxTillNow;
            }
            maxTillNow=maxTillNow+nums[i];
        }
        if(maxTillNow>maxSoFar){
            maxSoFar=maxTillNow;
        }
        if(maxSoFar==0){
            maxSoFar=*max_element(nums.begin(),nums.end());
        }
        return maxSoFar;
    }
