// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
vector<string> AllParenthesis(int n) ;


 // } Driver Code Ends
//User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
class Solution
{
    public:
    void helper(vector<string> &v,string s,int n,int m)
    {
         if(n==0&&m==0)
         {
            v.push_back(s);
            return;
         }
          if(n>0)
            helper(v,s+"(",n-1,m+1);
          if(m>0)
            helper(v,s+")",n,m-1);   
    }
    vector<string> AllParenthesis(int n) 
    {
        vector<string> ans;
        string s;
        helper(ans, s, n, 0);
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
		int n;
		cin>>n;
		Solution ob;
		vector<string> result = ob.AllParenthesis(n); 
		sort(result.begin(),result.end());
		for (int i = 0; i < result.size(); ++i)
			cout<<result[i]<<"\n";
	}
	return 0; 
} 
  // } Driver Code Ends