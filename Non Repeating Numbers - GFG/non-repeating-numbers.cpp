// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        int f=0, s=0;
        int res=0, n=nums.size();
        for(int i=0; i<n; i++)
        {
            res=res^nums[i];
        }
        int d=res&(-res);
        for(int i=0; i<n; i++)
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
        if(f>s)
            swap(f, s);
        return {f, s};
    }
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}  // } Driver Code Ends