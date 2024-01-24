int findKRotation(vector<int> &arr){
        int n=arr.size();
        int low=0,high=n-1;
        int res=INT_MAX;
        int resi;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[low]<=arr[high]){
                if(res>arr[low]){
                    res=arr[low];
                    resi=low;
                }
                break;
            }
            if(arr[low]<=arr[mid]){
                if(res>arr[low]){
                    res=arr[low];
                    resi=low;
                }
                low=mid+1;
            }
            else{
                if(res>arr[mid]){
                    res=arr[mid];
                    resi=mid;
                }
                high=mid-1;
            }
        }
        return resi;
}   
