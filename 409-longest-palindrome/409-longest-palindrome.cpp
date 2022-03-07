class Solution {
public:
    int longestPalindrome(string s) {
        map<char, int> mp;
        int n=s.length();
        for(int i=0; i<n; i++)
        {
            mp[s[i]]++;
        }
        int f=0;
        int ans=0;
        for(auto it=mp.begin(); it!=mp.end(); it++)
        {
            if(it->second%2!=0)
            {
                f=1;
                ans+=(it->second-1);
            }
            else
                ans+=(it->second);
        }
        if(f==1)
            ans++;
        return ans;
    }
};