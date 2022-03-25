// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    void help(vector<int> &arr, vector<int> &ans, int n, int i, int &s)
    {
        ans.push_back(s);
        for(int j=i; j<n; j++)
        {
            s+=arr[j];
            help(arr, ans, n, j+1, s);
            s-=arr[j];
        }
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int> ans;
        int s=0;
        help(arr, ans, N, 0, s);
        return ans;
        // Write Your Code here
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends