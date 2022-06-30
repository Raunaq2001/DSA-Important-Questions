//Leetcode question # 3
//https://takeuforward.org/data-structure/length-of-longest-substring-without-any-repeating-character
//See approach 1
    int lengthOfLongestSubstring(string s) {
        int maxAns=0,flag;
        for(int i=0;i<s.size();i++){
            unordered_set<int> us;
            flag=0;
            for(int j=i;j<s.size();j++){
                if(us.find(s[j])!=us.end()){
                    flag=1;
                    maxAns=max(maxAns,j-i);
                    break;
                }
                us.insert(s[j]);
            }
            /* This is a special edge case checker when there isnt any character repeating and the                        iterator reaches the end, in that case since no comparasion with maxAns has been done
               so maxAns will be 0 which is wrong so again a check is done.
            */
            if(flag==0){
                int size=s.size();
                maxAns=max(maxAns,size-i);
            }
        }
        return maxAns;
    }
