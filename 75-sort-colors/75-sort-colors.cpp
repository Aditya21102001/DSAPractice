class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i=0, m=0, n=nums.size();
        int j=n-1;
        while(i<=j)
        {
            if(nums[i]==1)
            {
                i++;
            }
            else if(nums[i]==2)
            {
                swap(nums[i], nums[j]);
                j--;
            }
            else
            {
                swap(nums[i], nums[m]);
                m++;
                i++;
            }
        }
        
    }
};