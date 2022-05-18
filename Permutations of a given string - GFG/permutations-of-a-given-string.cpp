// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
	    void per(string s, vector<string>& ans, int in)
	    {
	        if(in==s.length())
	        {
	            ans.push_back(s);
	        }
	        set<char> st;
	        for(int i=in; i<s.length(); i++)
	        {
	            if(st.count(s[i]))
	            {
	                continue;
	            }
	            st.insert(s[i]);
	            swap(s[i], s[in]);
	            per(s, ans, in+1);
	            swap(s[i], s[in]);
	        }
	        return ;
	    }
		vector<string>find_permutation(string S)
		{
		    vector<string> ans;
		    per(S, ans, 0);
		    sort(ans.begin(), ans.end());
		    return ans;
		}
};



// { Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}
  // } Driver Code Ends