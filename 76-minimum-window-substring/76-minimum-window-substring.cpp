class Solution {
public:
    string minWindow(string s, string t) {
        int n=s.length();
        int m=t.length();
        map<char, int> mp, mpt;
        int ma=0, ml=INT_MAX;
        for(int i=0; i<m; i++)
        {
            mp[t[i]]++;
            mpt[t[i]]=0;
        }
        int st=0, i=0;
        string ans;
        for(i=0; i<n; i++)
        {
            if(mp.find(s[i])!=mp.end())
            {
                 mpt[s[i]]++;
                if(mpt[s[i]]<=mp[s[i]])
                {
                    ma++;
                }
            }
            if(ma>=m)
            {
                while (mp.find(s[st]) == mp.end() || mpt[s[st]] > mp[s[st]])
                {
                    mpt[s[st]]--;
                    st++;
                }
                if(i-st+1<ml)
                {
                    ml=i-st+1;
                    ans=s.substr(st, ml);
                }
            }
        }  
        return ans;
    }
};