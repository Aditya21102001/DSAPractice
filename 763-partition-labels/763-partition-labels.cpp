class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> ans;
        int n=s.length();
        int ch[26];
        for(int i=0; i<n; i++)
            ch[s[i]-97]=i;
        int ma=-1, su=0;
        for(int i=0; i<n; i++)
        {
            ma=max(ch[s[i]-97], ma);
            if(ma==i)
            {
                ans.push_back(i+1-su);
                su=i+1;
            }
        }
        return ans;
    }
};