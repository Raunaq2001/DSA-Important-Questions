    //Leetcode question # 30
    //https://redquark.org/leetcode/0030-substring-with-concatenation-of-all-words
    /* Concept Used: If we look at the problem, first constraint we find is that all the strings in words array should be included in the          combination. Even if a string is repeated in the array, it should be considered in the combination that many times.

       For e.g., if words == ["foo", "foo"], then we need to search foofoo in the s. Thus, we can use Map to store the count of each string        in the words.

       Since every string in words is of equal length, the length of the string combination we need to search in words will be

       // Length of each word: wordLength = words[0].length()
       // Total length: wordArrayLength = wordLength * words.length

       Now, we need to search a string of length wordArrayLength in the s. After getting the substring string, we will check if all the            strings present in the words are present in it. If they are, we will add the starting index, otherwise we will skip.

       Below are steps -

       1.Store the count of each string in words in a map, say wordCount.
       2.Loop through the s and in each iteration, do the following -
       3.Get the substring of length wordArrayLength.
       4.Break this substring into further substrings of length wordLength.
       5.Store the count of substrings fount in #4 into another map.
       6.At last, check if both the maps are equal. If they are, then add the current index in the resultant list.

       The most important part in the above algorithm is to understand why we are comparing maps 🤔? We are doing it because if the              combined string lies in the s, then counts of all the strings in words will be equal to the count of all the partitions in the              substring of length wordArryaLength.
    */
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> ans;
        unordered_map<string,int> mpp;
        for(int i=0;i<words.size();i++) mpp[words[i]]++;
        int wordLength=words[0].size();
        int wordArrayLength=wordLength*words.size();
        if(wordArrayLength>s.size()) return ans;
        for(int i=0;i<=s.size()-wordArrayLength;i++){
            unordered_map<string,int> temp;
            string str=s.substr(i,wordArrayLength);
            int j=0,index=0;
            while(index<words.size()){
                string res=str.substr(j,wordLength);
                temp[res]++;
                j=j+wordLength;
                index++;
            }
            if(mpp==temp) ans.push_back(i);
        }
        return ans;
    }
