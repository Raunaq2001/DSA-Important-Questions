    //https://www.youtube.com/watch?v=KnWqCfIfHX0&t=0s&ab_channel=TECHDOSE
    int firstUniqChar(string s) {
        vector<int> freqArr(26,0);
        for(int i=0;i<s.length();i++){
            freqArr[s[i]-'a']++;
            //s[i]-'a' will return a number like if s[i]==a then s[i]-'a' will return 0 and so on
        }
        for(int i=0;i<s.length();i++){
            if(freqArr[s[i]-'a']==1) return i;
        }
        return -1;
    }
