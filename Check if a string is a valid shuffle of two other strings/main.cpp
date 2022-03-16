// @Author: RAUNAQ SINGH
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool isValid(string str1,string str2,string shuffled){
    if(shuffled.length()>str1.length()+str2.length()){
        return false;
    }
    string str3=str1+str2;
    sort(str3.begin(),str3.end());
    sort(shuffled.begin(),shuffled.end());
    if(str3!=shuffled){
        return false;
    }
    return true;
}
int main()
{
    string str1,str2,shuffled;
    cout<<"Enter string 1 = ";
    getline(cin,str1);
    cout<<"Enter string 2 = ";
    getline(cin,str2);
    cout<<"Enter the shuffled string = ";
    getline(cin,shuffled);
    cout<<"Result = "<<isValid(str1,str2,shuffled);
    return 0;
}
