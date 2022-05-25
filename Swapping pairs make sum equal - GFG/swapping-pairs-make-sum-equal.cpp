// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	int findSwapValues(int a[], int n, int b[], int m)
	{
        sort(a, a+n);
        sort(b, b+m);
        int sa=0, sb=0;
        for(int i=0; i<n; i++)
        {
            sa+=a[i];
        }
        for(int i=0; i<m; i++)
        {
            sb+=b[i];
        }
        for(int i=0; i<n; i++)
        {
            if(sb-sa+2*a[i]<0 || (sb-sa+2*a[i])%2!=0)
            {
                continue;
            }
            int k=(sb-sa+2*a[i])/2;
            int in=lower_bound(b, b+m, k)-b;
            if(in<m && b[in]==k)
            {
                return 1;
            }
        }
        return -1;
	}
 

};

// { Driver Code Starts.

int main() 
{
   	
   	int t;
    cin >> t;
    while (t--)
    {
    	int n,m;
        cin>>n>>m;
        int a[n];
        int b[m];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<m;i++)
            cin>>b[i];
        

        Solution ob;
        cout <<  ob.findSwapValues(a, n, b, m);
	    cout << "\n";
	     
    }
    return 0;
}





  // } Driver Code Ends