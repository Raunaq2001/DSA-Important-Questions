    //@Author: RAUNAQ SINGH
    //https://practice.geeksforgeeks.org/problems/move-all-zeroes-to-end-of-array0751/1?page=2&company[]=SAP%20Labs&sortBy=submissions
	void pushZerosToEnd(int arr[], int n) {
	    vector<int> v;
	    for(int i=0;i<n;i++){
	        if(arr[i]!=0){
	            v.push_back(arr[i]);
	        }
	    }
	    for(int i=0;i<v.size();i++) arr[i]=v[i];
	    for(int i=v.size();i<n;i++) arr[i]=0;
	}
