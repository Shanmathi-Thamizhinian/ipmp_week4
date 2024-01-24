pair<int, int> getFloorAndCeil(vector<int> &arr, int n, int x) {
	int fl=-1,ceil=-1;
    pair<int,int> ans;
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]<=x){
            fl=arr[mid];
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    ans.first=fl;
    low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>=x){
            ceil=arr[mid];
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    ans.second=ceil;
    return ans;
}
