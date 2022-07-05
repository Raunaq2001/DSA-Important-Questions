//Code studio question # 15
//https://www.geeksforgeeks.org/minimum-characters-added-front-make-string-palindrome/ (Naive Approach)
//@Author: RAUNAQ SINGH
#include<bits/stdc++.h>
bool isPalindrome(string str){
    int i=0,j=str.length()-1;
    while(i<j){
        if(str[i]!=str[j]) return false;
        i++;
        j--;
    }
    return true;
}
int minCharsforPalindrome(string str) {
	if(str.length()==1) return 0;
    if(isPalindrome(str)) return 0;
	int counter=0,i=0;
    while(i<=str.length()){
        if(!isPalindrome(str)){
            counter++;
            str.pop_back();
        }
        else{
            break;
        }
        i++;
    }
    return counter;
}
