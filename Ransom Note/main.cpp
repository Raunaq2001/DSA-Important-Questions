    //Leetcode question # 383
    //@Author: RAUNAQ SINGH
    /* Concept Used: Create two maps one for ransomNote and another for magazine, then in the map add the
                     occourances of each alphaets in the respective strings in the respective maps then simply
                     check that for each letter the occourance of an alphabet in ransomNote should be less than
                     or equal to its occourance in magazine. If ever a case comes when the occourance of a
                     letter in ransomeNote string becomes greater than the occourance of the letter in magazine
                     string then return false.
    */
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> ransomNoteMpp,magazineMpp;
        for(int i=0;i<ransomNote.size();i++) ransomNoteMpp[ransomNote[i]]++;
        for(int i=0;i<magazine.size();i++) magazineMpp[magazine[i]]++;
        for(auto it:ransomNoteMpp){
            char ch=it.first;
            int occourance=it.second;
            if(magazineMpp.find(ch)==magazineMpp.end()) return false;
            if(magazineMpp.find(ch)!=magazineMpp.end()){
                int finds=magazineMpp[ch];
                if(occourance>finds) return false;
            }
        }
        return true;
    }
