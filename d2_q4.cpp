int floorSqrt(int n)
{
    int low=1,high=n;
    int ans=1;
    while(low<=high){
        long long mid=(low+high)/2;
        long long sq=mid*mid;
        if(sq<=n){
            ans=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return high;
}
