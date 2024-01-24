int func(int mid,int n,int m){
    long long ans=1;
    for(int i=0;i<n;i++){
        ans=ans*mid;
        if(ans>m) return 2;
    }
    if (ans==m) return 1;
    return 0;
}

int NthRoot(int n, int m) {
    long long low=1,high=m;
    while(low<=high){
        long long mid=(low+high)/2;
        int val=func(mid,n,m);
        if(val==1){
            return mid;
        }
        else if(val==2) high=mid-1;
        else if(val==0) low=mid+1;
    }
    return -1;
}
