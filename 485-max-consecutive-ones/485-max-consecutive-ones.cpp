class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c=0, ans=0;
        int n=nums.size();
        for(int i=0; i<n;)
        {
            if(nums[i]==1)
            {
                c=0;
                while(i<n && nums[i]==1)
                {
                    c++;
                    i++;
                }
                ans=max(ans, c);
            }
            else
            {
                i++;
            }
        }
        return ans;
    }
};