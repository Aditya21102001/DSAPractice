// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	vector<int> findSubarray(int a[], int n) {
	    long long s=0, e=0, c_s=0, c_e=0, cu=0, res=0;
	    for(int i=0; i<n; i++)
	    {
	        if(a[i]>=0)
	        {
	            c_e=i;
	            cu+=a[i];
	        }
	        else
	        {
	            if(cu>res || (cu==res && abs(c_s-c_e)>abs(s-e)))
	            {
	                res=cu;
	                s=c_s;
	                e=c_e;
	            }
	            c_s=i+1;
	            cu=0;
	        }
	    }
	    if(cu>res || (cu==res && abs(c_s-c_e)>abs(s-e)))
        {
            res=cu;
            s=c_s;
            e=c_e;
        }
	    vector<int> ans;
	    for(int i=s; i<=e; i++)
        {
            ans.push_back(a[i]);
            
        }
        if(ans.size()==0)
        {
            return {-1};
        }
        return ans;
	}
};

// { Driver Code Starts.

void printAns(vector<int> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findSubarray(a, n);
        printAns(ans);
    }
    return 0;
}
  // } Driver Code Ends