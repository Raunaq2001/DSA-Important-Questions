// @Author: RAUNAQ SINGH
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isSubstring(string str,string subStr){
    if(subStr.size()>str.size() || subStr.size()==0){
        return false;
    }
    if(subStr==str){
        return true;
    }
    int i=0,j=0,temp=0;
    for(i=0;str[i]!='\0';i++){
        j=0;
        if(str[i]==subStr[j]){
            temp=i+1;
            while(str[i]==subStr[j]){
                i++;
                j++;
            }
            if(subStr[j]=='\0'){
                //cout<<"Substring starts from index = "<<temp<<endl; if need to print the starting index of the substring in the string uncomment this line
                return true;
            }
            else{
                i=temp;
                temp=0;
            }
        }
    }
    if(temp==0){
        return false;
    }
}
int main()
{
    string str="Raunaq Singh";
    string subStr="una";
    cout<<"Check for substring = ()"<<isSubstring(str,subStr);
    return 0;
}
