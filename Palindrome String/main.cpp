int isPalindrome(string S)
	{
	    string copy=S;
	    // Using C++ STL
	    /*reverse(S.begin(),S.end());
	    if(copy.compare(S)==0){
	        return 1;
	    }
	    else{
	        return 0;
	    }*/
	    // Without using C++ STL
	    /*int start=0,end=S.size()-1;
	    char temp;
	    while(start<end){
	        temp=S[start];
	        S[start]=S[end];
	        S[end]=temp;
	        start++;
	        end--;
	    }
	    if(S==copy){
	        return 1;
	    }
	    else{
	        return 0;
	    }*/
	}
