class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        // 1 2 3 is a slice and 2 3 4 is also a slice
        // means 1 2 3 4 is a slice too
        int pre = 0; 
        int res = 0;
        for (int i = 2; i < nums.size(); i++){
            if(nums.at(i) - nums.at(i - 1) == nums.at(i - 1) - nums.at(i - 2)){
                pre += 1; //no.of new arithmetic that has nums[i] as last element
                res += pre; //counting
            }
            else
                pre = 0;
        }
    return res;
    }
};