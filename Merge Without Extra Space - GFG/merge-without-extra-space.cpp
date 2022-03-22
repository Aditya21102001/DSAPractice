// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends
class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int m, int n) 
        { 
            // code here 
            int i=0, j=0, c=0;
    	    while(i<m && j<n && c<m)
    	    {
    	        if(arr1[i]<=arr2[j])
    	        {
    	            i++;
    	        }
    	        else
    	        {
    	            j++;
    	        }
    	        c++;
    	    }
    	    while(c<m && i<m)
    	    {
    	        i++;
    	        c++;
    	    }
    	    for(int k=0; k<j;)
    	    {
    	        swap(arr1[i], arr2[k]);
    	        i++;
    	        k++;
    	    }
    	    sort(arr1, arr1+m);
    	    sort(arr2, arr2+n);
        } 
};

// { Driver Code Starts.

int main() 
{ 
	
	int T;
	cin >> T;
	
	while(T--){
	    int n, m;
	    cin >> n >> m;
	    
	    long long arr1[n], arr2[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    ob.merge(arr1, arr2, n, m); 

        for (int i = 0; i < n; i++) 
            cout<<arr1[i]<<" "; 
        
       
	    for (int i = 0; i < m; i++) 
		    cout<<arr2[i]<<" "; 
	    
	    cout<<endl;
	}

	return 0; 
} 
  // } Driver Code Ends