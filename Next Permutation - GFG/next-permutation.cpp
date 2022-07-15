// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> nextPermutation(int n, vector<int> arr){
        vector<int> ans(n);
        int id=-1, id1=-1;
        for(int i=n-2; i>=0; i--)
        {
            if(arr[i]<arr[i+1])
            {
                id=i;
                break;
            }
        }
        if(id==-1)
        {
            for(int i=0; i<n; i++)
            {
                ans[i]=arr[i];
            }
            sort(ans.begin(), ans.end());
            return ans;
        }
        else
        {
            for(int i=n-1; i>=0; i--)
            {
                if(arr[i]>arr[id])
                {
                    id1=i;
                    break;
                }
            }
            swap(arr[id], arr[id1]);
            for(int i=0; i<n; i++)
            {
                ans[i]=arr[i];
            }
            sort(ans.begin()+id+1, ans.end());
            return ans;
        }
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        vector<int> ans = ob.nextPermutation(N, arr);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}  // } Driver Code Ends