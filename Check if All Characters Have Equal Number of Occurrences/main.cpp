    //Leetcode question # 1941
    //@Author: RAUNAQ SINGH
    /* Concept Used: Simple create an unordered_map by and store the occourances of each alphabets of that string
                     in that map and then take the first element's occourance using mpp.begin()->second and
                     compare it with the occourances of the other elements. If at any point the occourance is not
                     equal we return a false or else we return true
    */
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int> mpp;
        for(int i=0;i<s.size();i++) mpp[s[i]]++;
        int target=mpp.begin()->second;
        for(auto it:mpp){
            if(it.second!=target) return false;
        }
        return true;
    }
