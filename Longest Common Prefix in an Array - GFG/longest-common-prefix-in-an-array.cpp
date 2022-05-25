// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int n)
    {
        string ans=arr[0];
        int l=arr[0].length();
        for(int i=1; i<n; i++)
        {
            int j;
            for(j=0; j<min(ans.length(), arr[i].length()); j++)
            {
                if(ans[j]!=arr[i][j])
                {
                    break;
                }
            }
            l=min(j, l);
            if(l==0)
            {
                break;
            }
        }
        
        string res="";
        for(int i=0; i<l; i++)
        {
            res+=ans[i];
        }
        if(l==0)
        {
            res="-1";
        }
        return res;
    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends