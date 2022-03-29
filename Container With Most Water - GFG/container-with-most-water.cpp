// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;
// int maxArea(int A[], int len);

 // } Driver Code Ends
//User function template for C++

long long maxArea(long long a[], int len)
{
    int l=0, r=len-1;
    long long c=0, m=0;
    while(l<r)
    {
        m=max(m, min(a[l], a[r])*(r-l));
        if(a[l]<a[r])
        {
            l++;
        }
        else
        {
            r--;
        }
    }
    return m;
}

// { Driver Code Starts.

// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
    {
        int n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cout<<maxArea(arr,n)<<endl;
    }
return 0;
}
  // } Driver Code Ends