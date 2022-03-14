// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
	    void per(string s, vector<string>& ans, string& st, vector<bool>& fr)
	    {
	        if(st.length()==s.length())
	        {
	            ans.push_back(st);
	        }
	        for(int i=0; i<s.length(); i++)
	        {
	            if(!fr[i])
	            {
	                st.push_back(s[i]);
	                fr[i]=true;
	                per(s, ans, st, fr);
	                st.pop_back();
	                fr[i]=false;
	            }
	        }
	        return ;
	    }
		vector<string>find_permutation(string S)
		{
		    vector<string> ans;
		    vector<bool> fr(S.length(), false);
		    string st;
		    per(S, ans, st, fr);
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