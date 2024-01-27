//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


int KthMissingElement(int a[], int n, int k);


int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        
        cout << KthMissingElement(a, n, k) << endl;
    
    }
    return 0;
}

// } Driver Code Ends


// Function to find the kth missing element in the array.
int KthMissingElement(int a[], int n, int k)
{
    bool flag = 0; // Flag to check if the kth missing element is found.
    int ans = 0; // Variable to store the kth missing element.
    int count = k; // Variable to track the remaining count of missing elements.
    int difference = 0; // Variable to store the difference between consecutive elements.
    
    // Iterate over the array to find the kth missing element.
    // Only iterate till n-1 to avoid accessing out of bounds memory.
    for (int i = 0; i < n-1; i++)
    {
        difference = 0; // Reset the difference for each pair of consecutive elements.
        
        // Check if there is a gap between the current element and the next element.
        if ((a[i] + 1) != a[i + 1]) {
            difference += (a[i + 1] - a[i]) - 1; // Calculate the number of missing elements between the current and next element.
            
            // Check if the difference is greater than or equal to the remaining count of missing elements.
            if (difference >= count)
            {
                ans = a[i] + count; // Calculate the kth missing element.
                flag = 1; // Set the flag to indicate that the kth missing element is found.
                break; // Exit the loop since the kth missing element is already found.
            }
            else
                count -= difference; // Update the remaining count of missing elements.
        }
    }
    
    // Check if the kth missing element is found.
    if (flag)
        return ans; // Return the kth missing element.
    
    return -1; // Return -1 if the kth missing element is not found.
}
