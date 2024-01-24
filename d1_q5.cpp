class Solution {
public:
    int findMin(vector<int>& arr) {
        int n=arr.size();
        int low=0,high=n-1;
        int res=INT_MAX;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[low]==arr[mid] && arr[mid]==arr[high]){
                res=min(res,arr[mid]);
                low++;
                high--;
                continue;
            }
            if(arr[low]<=arr[mid]){
                res=min(res,arr[low]);
                low=mid+1;
            }
            else{
                res=min(res,arr[mid]);
                high=mid-1;
            }
        }
        return res;
    }
};
