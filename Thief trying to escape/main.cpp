    //@Author: RAUNAQ SINGH
    //https://practice.geeksforgeeks.org/problems/thief-try-to-excape0710/1?page=2&company[]=Cisco&sortBy=submissions
    int totalJumps(int X, int Y, int N, int arr[]){
        int ans=0;
        for(int i=0;i<N;i++){
            int num=arr[i];
            int counter=0;
            while(num>0){
                counter++;
                num=num-X;
                if(num<=0) break;
                else num=num+Y;
            }
            ans=ans+counter;
        }
        return ans;
    }
