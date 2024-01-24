class Solution {
public:
    int totalHours(vector<int>& piles, int k){
        int total=0;
        int n=piles.size();
        for(int i=0;i<n;i++){
            total+=ceil((double)piles[i]/(double)k);
        }
        return total;
    }
    int maxElement(vector<int>& piles){
         int maxi=INT_MIN;
         int n=piles.size();
         for(int i=0;i<n;i++){
            maxi=max(maxi,piles[i]);
        }
        return maxi;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int maxi=maxElement(piles);
        int low=0,high=maxi;
        while(low<=high){
            int mid=(low+high)/2;
            int total=totalHours(piles,mid);
            if(total<=h) high=mid-1;
            else low=mid+1;
        }
        return low;
    }
};
