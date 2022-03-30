// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution {
  public:
    //Function to find two repeated elements.
    vector<int> twoRepeated (int nums[], int n) {
        int f=0, s=0;
        int res=0;
        for(int i=0; i<n+2; i++)
        {
            res=res^nums[i];
        }
        for(int i=1; i<=n; i++)
        {
            res=res^i;
        }
        int d=res&(~(res-1));
        for(int i=0; i<n+2; i++)
        {
            if(nums[i]&d)
            {
                f=f^nums[i];
            }
            else
            {
                s=s^nums[i];
            }
        }
        for(int i=1; i<=n; i++)
        {
            if(i&d)
            {
                f=f^i;
            }
            else
            {
                s=s^i;
            }
        }
        for(int i=n+1; i>=0; i--)
        {
            if(nums[i]==s)
            {
                break;
            }
            else if(nums[i]==f)
            {
                swap(f, s);
                break;
            }
        }
        // if(f>s)
        //     swap(f, s);
        return {f, s};
    }
};

// { Driver Code Starts.

int main()
{
    int t,n;
    cin>>t;
    
    while(t--)
    {
        cin>>n;
        
        int a[n+2];
        
        for(int i=0;i<n+2;i++)
            cin>>a[i];
        
        Solution obj;
        vector<int> res;
        res = obj.twoRepeated(a, n);
        cout<<res[0]<<" "<<res[1]<<endl;
    }
    return 0;
}
  // } Driver Code Ends