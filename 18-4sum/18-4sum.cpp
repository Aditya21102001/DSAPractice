class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for(int i=0; i<n-3; i++)
        {
            for(int j=i+1; j<n-2; j++)
            {
                int t=target-nums[i]-nums[j];
                int l=j+1, r=n-1;
                while(l<r)
                {
                    if(nums[l]+nums[r]==t)
                    {
                        vector<int> v;
                        v.push_back(nums[i]);
                        v.push_back(nums[j]);
                        v.push_back(nums[l]);
                        v.push_back(nums[r]);
                        ans.push_back(v);
                        while(l<r && nums[l]==v[2])
                            l++;
                        while(l<r && nums[r]==v[3])
                            r--;;
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
                while(j+1<n-2 && nums[j+1]==nums[j])
                {
                    j++;
                }
            }
            while(i+1<n-3 && nums[i+1]==nums[i])
            {
                i++;
            }
        }
        return ans;
    }
};