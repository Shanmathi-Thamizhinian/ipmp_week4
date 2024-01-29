//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    
    int countCurr(int A[], int mid,int N){
        long long students=1;
        long long currPages=0;
        for(int i=0;i<N;i++){
            if(currPages + A[i]<=mid){
                currPages+=A[i];
            }
            else{
                students++;
                currPages=A[i];
            }
        }
        return students;
    }
    //Function to find minimum number of pages.
    int findPages(int A[], int N, int M) 
    {
        long long sum=0, maxi=INT_MIN;
        for(int i=0;i<N;i++){
            if(A[i]>maxi) maxi=A[i];
            sum+=A[i];
        }
        if(M>N) return -1;
        long long low=maxi;
        long long high=sum;
        long long mid=(low+high)/2;
        while(low<=high){
            long long currStudents= countCurr(A,mid,N);
            if(currStudents>M) low=mid+1;
            else high=mid-1;
        }
        return low;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends
