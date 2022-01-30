#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec;
    int size=0,profit=NULL,maxProfit=NULL;
    cout<<"Enter the array size = ";
    cin>>size;
    cout<<"Enter the array elements = ";
    for(int i=0;i<size;i++){
        int num;
        cin>>num;
        vec.push_back(num);
    }
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(vec[j]>vec[i]){
                profit=vec[j]-vec[i];
                if(maxProfit<profit){
                    maxProfit=profit;
                }
            }
        }
    }
    cout<<"Maximum profit = "<<maxProfit;
    return 0;
}
