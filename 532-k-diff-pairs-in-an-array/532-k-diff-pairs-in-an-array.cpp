class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for(int i=0; i<nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        int ans=0;
        for(auto it=mp.begin(); it!=mp.end(); it++)
        {
            if(k==0)
            {
                if(it->second>1)
                {
                    ans++;
                }
            }
            else if(mp.find(it->first+k)!=mp.end())
            {
                ans++;
            }
            
        }
        return ans;
    }
};