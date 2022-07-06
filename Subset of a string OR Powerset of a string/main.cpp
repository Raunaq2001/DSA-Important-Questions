//https://www.youtube.com/watch?v=mEBEw_xScsE&list=PLUcsbZa0qzu3yNzzAxgvSgRobdUUJvz7p&index=10&ab_channel=AnujBhaiya
//Time Complexity: O(2^N)
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void findPermutations(string str,string ans,int i){
    if(i==str.length()){
        cout<<ans<<" ";
        return;
    }
    findPermutations(str,ans+str[i],i+1);
    findPermutations(str,ans,i+1);
}
int main(){
    string s="abc",ans="";
    int i=0;
    findPermutations(s,ans,i);
    return 0;
}
