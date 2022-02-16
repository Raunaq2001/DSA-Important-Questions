#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void findDuplicates(string str){

    map<char,int> mpp;
    for(int i=0;str[i]!='\0';i++){
        mpp[str[i]]++;
    }
    for(auto it:mpp){
        if(it.second>1){
            cout<<it.first<<"->"<<it.second<<endl;
        }
    }
}
int main()
{
    string S="Raunaq";
    findDuplicates(S);
    return 0;
}
