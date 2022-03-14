// @Author: RAUNAQ SINGH
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool isSubString(string A,string B){
    string str1=(A.length()>B.length())?A:B; // Store the longer of the 2 strings
    string str2=(A.length()<=B.length())?A:B; // Store the smaller of the 2 strings
    int len1=str1.length();
    int len2=str2.length();
    int j=0;
    for(int i=0;i<len1;i++){
        if(str1[i]==str2[j]){
            j++;
        }
    }
    if(j==len2){
        return true;
    }
    return false;
}
int main()
{
    string str1,str2;
    cout<<"Enter string 1 = ";
    getline(cin,str1);
    cout<<"Enter string 2 = ";
    getline(cin,str2);
    if(isSubString(str1,str2)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    return 0;
}
