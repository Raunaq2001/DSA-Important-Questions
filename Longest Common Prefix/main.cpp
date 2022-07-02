//Leetcode question # 14
//https://www.youtube.com/watch?v=VTr3Nh7BadI&ab_channel=CodeHelp-byBabbar
    string longestCommonPrefix(vector<string>& arr) {
        int n=arr.size();
        string ans="";
        for(int i=0;i<arr[0].size();i++){
            char ch=arr[0][i];
            bool match=true;
            for(int j=1;j<n;j++){
                if(arr[j][i]!=ch || arr[j].size()<i){
                    match=false;
                    break;
                }
            }
            if(match==false) break;
            else ans=ans+ch;
        }
        return ans;
    }
