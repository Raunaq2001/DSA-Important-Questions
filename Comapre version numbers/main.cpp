//Leetcode question # 165
//@Author: RAUNAQ SINGH
    int compareVersion(string version1, string version2) {
        //Appending "." after the string so that the ans is pushed in the vectors.
        version1=version1+".";
        version2=version2+".";
        string ans="";
        vector<int> val1,val2;
        int size;
        for(int i=0;i<version1.size();i++){
            if(version1[i]=='.'){
                val1.push_back(stoi(ans));
                ans="";
            }
            else{
                ans=ans+version1[i];
            }
        }
        ans="";
        for(int i=0;i<version2.size();i++){
            if(version2[i]=='.'){
                val2.push_back(stoi(ans));
                ans="";
            }
            else{
                ans=ans+version2[i];
            }
        }
        //Making the size of val1 and val2 equal
        if(val1.size()<val2.size()){
            int numZeros=val2.size()-val1.size();
            while(numZeros){
                val1.push_back(0);
                numZeros--;
            }
        }
        else{
            int numZeros=val1.size()-val2.size();
            while(numZeros){
                val2.push_back(0);
                numZeros--;
            }
        }
        for(int i=0;i<val1.size();i++){
            if(val1[i]<val2[i]) return -1;
            else if(val1[i]>val2[i]) return 1;
        }
        return 0;
    }
