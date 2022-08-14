    //Leetcode question # 127
    //https://www.youtube.com/watch?v=ZVJ3asMoZ18&ab_channel=TECHDOSE
    //https://gist.github.com/SuryaPratapK/e8947c55e83b67c4c9da555bc67f101d
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> myset;
        bool isThere=false;
        for(auto it:wordList){
            if(it==endWord) isThere=true;
            myset.insert(it);
        }
        if(isThere==false) return 0;
        queue<string> q;
        int depth=0,lsize=0;
        q.push(beginWord);
        while(!q.empty()){
            depth++;
            lsize=q.size();
            while(lsize){
                lsize--;
                string curr=q.front();
                q.pop();
                for(int i=0;i<curr.size();i++){
                    string temp=curr;
                    for(char ch='a';ch<='z';ch++){
                        temp[i]=ch;
                        if(temp==curr) continue;
                        if(temp==endWord) return depth+1;
                        if(myset.find(temp)!=myset.end()){
                            q.push(temp);
                            myset.erase(temp);
                        }
                    }
                }
            }
        }
        return 0;
    }
