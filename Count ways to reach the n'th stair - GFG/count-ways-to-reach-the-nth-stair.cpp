// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    //Function to count number of ways to reach the nth stair.
    int countWays(int n)
    {
        vector<long long> dp(n+1, 0);
	    for(int i=0; i<=n; i++)
	    {
	        if(i<2)
	        {
	            dp[i]=1;
	        }
	        else
	        {
	            dp[i]=(dp[i-1]%1000000007+dp[i-2]%1000000007)%1000000007;
	        }
	    }
	    return dp[n];
    }
};



// { Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}
  // } Driver Code Ends