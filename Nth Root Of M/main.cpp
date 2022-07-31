//Concept Used: Binary Search
//https://www.youtube.com/watch?v=WjpswYrS2nY&list=PLgUwDviBIf0p4ozDR_kJJkONnb1wdx2Ma&index=63&ab_channel=takeUforward
double multiply(double num,int times){
    double ans=1.0;
    for(int i=1;i<=times;i++) ans=ans*num;
    return ans;
}
double findNthRootOfM(int n, int m) {
	double lb=1,ub=m,exp=1e-9;
    while((ub-lb)>exp){
        double mid=(ub+lb)/2.0;
        if(multiply(mid,n)>m) ub=mid;
        else lb=mid;
    }
    return ub;
}
