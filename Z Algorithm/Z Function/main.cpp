//Code Studio question # 12
//https://www.youtube.com/watch?v=cx4MEJZu9kk&ab_channel=Let%27sPracticeTogether
//Also known as "Needle in a haystack problem"
int getMatches(string s,string p,int n,int m){
    string newString=p+"#"+s;
    int i=0,counter=0,newLength=newString.length();
    vector<int> z;
    while(i<newLength){
        if(i<=m) z.push_back(0);
        else{
            int left=0,right=0;
            if(newString[left]==newString[i]){
                right=i;
                while(newString[left]==newString[right] && right<newLength){
                    left++;
                    right++;
                }
            }
            z.push_back(left);
        }
        i++;
    }
    for(int i=0;i<newLength;i++){
        if(z[i]==m){
            counter++;
        }
    }
    return counter;
}
int zAlgorithm(string s, string p, int n, int m)
{
	int numMatches=getMatches(s,p,n,m);
    return numMatches;
}
