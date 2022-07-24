	    void findPermut(vector<string> &ans,string S,int lb,int ub){
	        if(lb==ub) ans.push_back(S);
	        else{
	            for(int i=lb;i<=ub;i++){
	                swap(S[i],S[lb]);
	                findPermut(ans,S,lb+1,ub);
	                swap(S[i],S[lb]);
	            }
	        }
	    }
		vector<string>find_permutation(string S)
		{
		    vector<string> ans;
		    findPermut(ans,S,0,S.size()-1);
		    sort(ans.begin(),ans.end());
		    int i=0;
		    for(int j=1;j<ans.size();j++){
		        if(ans[i]!=ans[j]){
		            i++;
		            ans[i]=ans[j];
		        }
		    }
		    vector<string> v;
		    for(int k=0;k<=i;k++) v.push_back(ans[k]);
		    return v;
		}
