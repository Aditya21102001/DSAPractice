class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //  bruteforsce O n^2 O(1); two pointer O nlogn O(1) ;  O n using map O n
        unordered_map<int, int> umap;
        int idx=0;
        for(auto el:nums)
            umap[el]=idx++;
        for(int i=0;i<nums.size();i++){
            if(umap.find(target-nums[i])!=umap.end() and i!=umap[target-nums[i]])
                return {i, umap[target-nums[i]]};
        }
        
        return {};
    }
};