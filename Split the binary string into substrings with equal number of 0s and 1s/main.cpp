#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int splitString(string str){
    int counter=0,count0=0,count1=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='0'){
            count0++;
        }
        else{
            count1++;
        }
        if(count0==count1){
            counter++;
        }
    }
    if(count0!=count1){
        return -1;
    }
    return counter;
}
int main()
{
    string str;
    cout<<"Enter the string = ";
    getline(cin,str);
    cout<<"Answer = "<<splitString(str);
    return 0;
}
