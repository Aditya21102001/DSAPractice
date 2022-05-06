class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        priority_queue <pair<int, int>, vector<pair<int, int>>, greater<pair<int, int> >> pq;
        unordered_map<int, int> mp;
        for(int i=0; i<nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        for(auto it=mp.begin(); it!=mp.end(); it++)
        {
            pq.push({it->second, it->first});
            if(pq.size()>k)
            {
                pq.pop();
            }
        }
        for(int i=0; i<k; i++)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};