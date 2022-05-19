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
    void helper(vector<string> &v,string s,int o,int c, int n)
    {
         if(o==n && c==n)
         {
            v.push_back(s);
            return;
         }
          if(o<n)
            helper(v,s+"(", o+1, c, n);
          if(c<o)
            helper(v,s+")", o, c+1, n);   
    }
    vector<string> AllParenthesis(int n) 
    {
        vector<string> ans;
        string s;
        helper(ans, s, 0, 0, n);
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