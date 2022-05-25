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
        int i=0;
	    int j=0;
	    while(i<n && j<m){
	        int p = sa-a[i]+b[j];
	        int q = sb-b[j]+a[i];
	        if(p==q){
	            return 1;
	        }
	        else if(p>q){
	            i++;
	        }
	        else{
	            j++;
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