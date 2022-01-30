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
