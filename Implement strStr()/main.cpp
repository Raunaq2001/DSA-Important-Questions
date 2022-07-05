//Leetcode question # 28
//https://github.com/Raunaq2001/DSA-Important-Questions/blob/main/Z%20Algorithm/Z%20Function/main.cpp
//Algorithm used: Z Function
    int strStr(string str, string pat) {
        int patLength=pat.length();
        string newString=pat+"#"+str;
        int i=0,counter=-1;
        vector<int> z;
        while(i<newString.length()){
            if(i<=patLength) z.push_back(0);
            else{
                int left=0,right=0;
                if(newString[left]==newString[i]){
                    right=i;
                    while(newString[left]==newString[right] && right<newString.length()){
                        left++;
                        right++;
                    }
                }
                z.push_back(left);
            }
            i++;
        }
        for(int i=0;i<newString.length();i++){
            if(z[i]==patLength){
                counter=0;
                counter=i-(patLength+1);
                break;
            }
        }
        return counter;
    }
