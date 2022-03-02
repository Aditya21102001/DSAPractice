class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int p=0, ans=0;
        int n=nums.size();
        int l=0;
        unordered_map<int, int> mp;
        for(int r=0; r<n; r++)
        { 
            p+=nums[r];
            if(p==k)
                ans++;
            if(mp[p-k]>0)
                ans+=mp[p-k];
            mp[p]++;
        }
        return ans;
    }
};