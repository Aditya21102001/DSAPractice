class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        vector<string> st;
        int n=strs.size();
        unordered_map<string, vector<int>> mp;
        for(int i=0; i<n; i++)
        {
            st.push_back(strs[i]);
            sort(st[i].begin(), st[i].end());
            mp[st[i]].push_back(i);
        }
        for(auto it=mp.begin(); it!=mp.end(); it++)
        {
            vector<string> v;
            for(int i=0; i<it->second.size(); i++)
            {
                v.push_back(strs[it->second[i]]);
            }
            ans.push_back(v);
        }
        return ans;
    }
};