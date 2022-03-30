// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int a[], int n) 
    { 
        vector<int> l_s(n);
        vector<int> r_l(n);
        int ans=0;
        int m=INT_MAX;
        for(int i=0; i<n; i++)
        {
            if(a[i]<m)
            {
                m=a[i];
            }
            l_s[i]=m;
        }
        m=INT_MIN;
        for(int i=n-1; i>=0; i--)
        {
            if(a[i]>m)
            {
                m=a[i];
            }
            r_l[i]=m;
        }
        int l=0, r=0;
        while(l<n && r<n)
        {
            if(l_s[l]<=r_l[r])
            {
                ans=max(ans, r-l);
                r++;
            }
            else
            {
                l++;
            }
        }
        return ans;
    }
};

// { Driver Code Starts.
  
/* Driver program to test above functions */
int main() 
{
    int T;
    //testcases
    cin>>T;
    while(T--){
        int num;
        //size of array
        cin>>num;
        int arr[num];
        
        //inserting elements
        for (int i = 0; i<num; i++)
            cin>>arr[i];
        Solution ob;
        
        //calling maxIndexDiff() function
        cout<<ob.maxIndexDiff(arr, num)<<endl;    
        
    }
    return 0;
}   // } Driver Code Ends