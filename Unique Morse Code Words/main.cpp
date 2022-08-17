    //Leetcode question # 804
    //@Author: RAUNAQ SINGH
    /*
    Concept Used: Create a map having word morse code reference of every respective word, after
                  that simply take a string from the vector "words" and word by word form the
                  morse code. Now check if the morse code so formed dosen't exists in the map
                  if this is the case then insert it else do nothing and move to the next word.
                  Finally return the size of the map whch will be our answer.

                  NOTE~ Here we are using unordered_map because we aren't concerned with the
                  relaive ordering of the alphabets. Hence, this will also save us some time
                  complexity as we ordering wont be there.
    */
    int uniqueMorseRepresentations(vector<string>& words) {
        if(words.size()==1) return 1;
        unordered_map<char,string> morseCode;
        morseCode.insert({'a',".-"});
        morseCode.insert({'b',"-..."});
        morseCode.insert({'c',"-.-."});
        morseCode.insert({'d',"-.."});
        morseCode.insert({'e',"."});
        morseCode.insert({'f',"..-."});
        morseCode.insert({'g',"--."});
        morseCode.insert({'h',"...."});
        morseCode.insert({'i',".."});
        morseCode.insert({'j',".---"});
        morseCode.insert({'k',"-.-"});
        morseCode.insert({'l',".-.."});
        morseCode.insert({'m',"--"});
        morseCode.insert({'n',"-."});
        morseCode.insert({'o',"---"});
        morseCode.insert({'p',".--."});
        morseCode.insert({'q',"--.-"});
        morseCode.insert({'r',".-."});
        morseCode.insert({'s',"..."});
        morseCode.insert({'t',"-"});
        morseCode.insert({'u',"..-"});
        morseCode.insert({'v',"...-"});
        morseCode.insert({'w',".--"});
        morseCode.insert({'x',"-..-"});
        morseCode.insert({'y',"-.--"});
        morseCode.insert({'z',"--.."});
        unordered_map<string,int> res;
        for(int i=0;i<words.size();i++){
            string ans="";
            string temp=words[i];
            for(int j=0;j<temp.size();j++){
                ans=ans+morseCode[temp[j]];
            }
            if(res.find(ans)==res.end()) res[ans]++;
        }
        return res.size();
    }
