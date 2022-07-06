//GFG problem "Search Pattern (KMP-Algorithm)"
//https://www.youtube.com/watch?v=4jY57Ehc14Y&ab_channel=LogicFirst (Probably the best explanation)
        void findLPS(string pat,int patLength,int LPS[]){
            int len=0,i=1;
            LPS[0]=0;
            while(i<patLength){
                if(pat[i]==pat[len]){
                    LPS[i]=len+1;
                    len++;
                    i++;
                }
                else{
                    if(len!=0){
                        len=LPS[len-1];
                    }
                    else{
                        LPS[i]=0;
                        i++;
                    }
                }
            }
        }
        vector <int> search(string pat, string txt)
        {
            int txtLength=txt.length();
            int patLength=pat.length();
            int LPS[patLength];
            vector<int> ans;
            findLPS(pat,patLength,LPS);
            int i=0,j=0;
            while(i<txtLength){
                if(txt[i]==pat[j]){
                    i++;
                    j++;
                }
                else{
                    if(j!=0){
                        j=LPS[j-1];
                    }
                    else{
                        i++;
                    }
                }
                if(j==patLength){
                    ans.push_back(i-j+1);
                    j=LPS[j-1];
                }
            }
            return ans;
        }
