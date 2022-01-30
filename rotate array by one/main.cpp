#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec;
    int size,temp;
    cout<<"Enter the array size = ";
    cin>>size;
    cout<<"Enter the array elements = ";
    for(int i=0;i<size;i++){
        int num;
        cin>>num;
        vec.push_back(num);
    }
    cout<<"Entered array = ";
    for(int i:vec){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Updated array = ";
    for(int i=size-2;i>=0;i--){
        temp=vec.at(i);
        vec.at(i)=vec.at(i+1);
        vec.at(i+1)=temp;
    }
    for(int i:vec){
        cout<<i<<" ";
    }
}
