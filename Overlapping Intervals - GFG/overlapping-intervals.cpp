// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>>& in) {
        vector<vector<int>> ans;
        sort(in.begin(), in.end());
        // for(int i=0; i<in.size();i++)
        // {
        //     cout<<in[i][0]<<" "<<in[i][1]<<endl;
        // }
        int s=-1, e=-1;
        for(int i=0; i<in.size();)
        {
            if(s==-1 && e==-1)
            {
                s=in[i][0];
                e=in[i][1];
                i++;
                continue;
            }
            int an=0;
            while(i<in.size() && e>=in[i][0])
            {
                e=max(in[i][1], e);
                i++;
                an=1;
            }
            vector<int> t;
            t.push_back(s);
            t.push_back(e);
            ans.push_back(t);
            s=-1;
            e=-1;
        }
        if(s!=-1 && e!=-1)
        {
            vector<int> t;
            t.push_back(s);
            t.push_back(e);
            ans.push_back(t);
        }
        return ans;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>Intervals(n);
		for(int i = 0; i < n; i++){
			int x, y;
			cin >> x >> y;
			Intervals[i].push_back(x);
			Intervals[i].push_back(y);
		}
		Solution obj;
		vector<vector<int>> ans = obj.overlappedInterval(Intervals);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}  // } Driver Code Ends