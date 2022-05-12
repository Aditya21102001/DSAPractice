class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]<0)
            {
                nums[i]=nums[i]%k+k;
            }
            else
            {
                nums[i]=nums[i]%k;
            }
        }
        int pr=0;
        int ans=0;
        unordered_map<int, int> mp;
        for(int i=0; i<nums.size(); i++)
        {
            pr=(pr%k+nums[i]%k)%k;
            if(pr==0)
            {
                ans++;
            }
            if(mp.find(pr)!=mp.end())
            {
                ans+=mp[pr];
            }
            mp[pr]++;
        }
        return ans;
    }
};