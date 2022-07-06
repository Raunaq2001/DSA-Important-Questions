//https://www.youtube.com/watch?v=mEBEw_xScsE&list=PLUcsbZa0qzu3yNzzAxgvSgRobdUUJvz7p&index=10&ab_channel=AnujBhaiya
//Time Complexity: O(N*N!)
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string swap(string s,int start,int end){
    char temp;
    temp=s[start];
    s[start]=s[end];
    s[end]=temp;
    return s;
}
void permuteString(string s,int lb,int ub){
    if(lb==ub){
        cout<<s<<" ";
        return;
    }
    for(int i=lb;i<=ub;i++){
        s=swap(s,lb,i);
        permuteString(s,lb+1,ub);
        s=swap(s,lb,i);
    }
}
int main(){
    string s="abcd";
    permuteString(s,0,3);
    return 0;
}
