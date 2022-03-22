class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int ans1=-1, c1=0, ans2=-1, c2=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]==ans1)
            {
                c1++;
            }
            else if(nums[i]==ans2)
            {
                c2++;
            }
            else if(c1==0)
            {
                ans1=nums[i];
                c1=1;
            }
            else if(c2==0)
            {
                ans2=nums[i];
                c2=1;
            }
            else
            {
                c1--;
                c2--;
            }
        }
        c1=0, c2=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]==ans1)
            {
                c1++;
            }
            else if(nums[i]==ans2)
            {
                c2++;
            }
        }
        vector<int> ans;
        if(c1>nums.size()/3)
            ans.push_back(ans1);
        if(c2>nums.size()/3)
            ans.push_back(ans2);
        
        return ans;
    }
};