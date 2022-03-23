class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int n=nums.size();
        sort(nums.begin(), nums.end());
        for(int i=0; i<n-2; i++)
        {
            int t=0-nums[i];
            int l=i+1, r=nums.size()-1;
            while(l<r)
            {
                if(nums[l]+nums[r]==t)
                {
                    vector<int> v;
                    v.push_back(nums[i]);
                    v.push_back(nums[l]);
                    v.push_back(nums[r]);
                    ans.push_back(v);
                    while(l<r && v[1]==nums[l])
                    {
                        l++;
                    }
                    while(l<r && v[2]==nums[r])
                    {
                        r--;
                    }
                }
                else if(nums[l]+nums[r]<t)
                {
                    l++;
                }
                else
                {
                    r--;
                }
                
            }
            while(i+1<n-2 && nums[i+1]==nums[i])
                    i++;
        }
        return ans;
    }
};