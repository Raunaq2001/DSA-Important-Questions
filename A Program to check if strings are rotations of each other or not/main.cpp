#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool isRotation(string str1,string str2){
    char ch=str1[0];
    int occourance=str2.find(ch);
    for(int i=0;i<str1.size();i++){
        char ch=str1[i];
        int index2;
        if(i+occourance<str1.size()){
            index2=i+occourance;
        }
        else{
            index2=(i+occourance)%str1.size();
        }
        if(ch!=str2[index2]){
            return false;
        }
    }
    return true;
}
int main()
{
    string str1,str2;
    cout<<"Enter string1 = ";
    getline(cin,str1);
    cout<<"Enter string2 = ";
    getline(cin,str2);
    if(isRotation(str1,str2)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    return 0;
}
