class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int i=0, j=-1, k=n;
        while(i<k)
        {
            if(nums[i]==0)
            {
                j++;
                swap(nums[i], nums[j]);
                i++;
            }
            else if(nums[i]==2)
            {
                k--;
                swap(nums[i], nums[k]);
            }
            else
                i++;
        }
    }
};