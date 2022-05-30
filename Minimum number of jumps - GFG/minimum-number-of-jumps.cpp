// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        int l=n-1;
        if(n==1)
        {
            return 0;
        }
        for(int i=n-2; i>=0; i--)
        {
            if(i+arr[i]>=l)
            {
                l=i;
            }
        }
        if(l!=0)
        {
            return -1;
        }
        int max_r=arr[0], curr=arr[0];
        if(curr==0)
        {
            return -1;
        }
        int ans=1;
        int i=1;
        while(max_r<n-1)
        {
            if(i+arr[i]>curr)
            {
                curr=i+arr[i];
            }
            if(i==max_r)
            {
                ans++;
                max_r=curr;
            }
            i++;
        }
        return ans;
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends