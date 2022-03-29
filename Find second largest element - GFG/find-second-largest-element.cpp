// { Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
   public:
    int print2largest(int arr[], int n)
    {
    	int f=INT_MIN, s=INT_MIN;
    	for(int i=0; i<n; i++)
    	{
    	    if(arr[i]>f)
    	    {
    	        s=f;
    	        f=arr[i];
    	    }
    	    else if(arr[i]>s && arr[i]!=f)
    	    {
    	        s=arr[i];
    	    }
    	}
    	if(s==INT_MIN)
    	{
    	    return -1;
    	}
    	return s;
    }

};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	      cin>>arr[i];
	    Solution ob;  
	    int ans=ob.print2largest(arr, n);
	    cout<<ans;
	    cout<<"\n";
	}
	return 0;
}
  // } Driver Code Ends