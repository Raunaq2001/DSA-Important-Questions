//https://www.youtube.com/watch?v=mEBEw_xScsE&list=PLUcsbZa0qzu3yNzzAxgvSgRobdUUJvz7p&index=10&ab_channel=AnujBhaiya
//Time Complexity: O(N)
#include <iostream>
using namespace std;
bool isPalindrome(string str,int lb,int ub){
    if(lb>=ub) return true;
    if(str[lb]!=str[ub]) return false;
    return isPalindrome(str,lb+1,ub-1);
}
int main()
{
    string str="racecar";
    if(isPalindrome(str,0,6)) cout<<"Palindrome String";
    else cout<<"Not Palindrome";
    return 0;
}
