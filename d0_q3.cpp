int searchInsert(vector<int>& arr, int m)
{
	int n=arr.size();
	int low=0,high=n-1;
	while(low<=high){
		int mid = (low+high)/2;
		if(arr[mid]==m) return mid;
		else if(arr[mid]>m) high=mid-1;
		else low=mid+1;
	}
	return low;
}
