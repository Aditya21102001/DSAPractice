class Solution {
public:
    bool wordPattern(string pattern, string s) {
        int ns=0;
        vector<string> v;
        for(int i=0; i<s.length(); i++)
        {
            string st="";
            while(i<s.length() && s[i]!=' ')
            {
                st+=s[i];
                i++;
            }
            cout<<st<<endl;
            v.push_back(st);
            if(i<s.length() && s[i]==' ')
                ns++;
        }
        unordered_set<char> st; 
        ns++;
        if(ns!=pattern.length())
            return false;
        unordered_map<string, char> mp;
        for(int i=0; i<ns; i++)
        {
            if(mp.find(v[i]) == mp.end() && st.find(pattern[i])==st.end())
            {
                mp[v[i]]=pattern[i];
                st.insert(pattern[i]);
            }
            else if(st.find(pattern[i])==st.end() || mp[v[i]]!=pattern[i])
                return false;
        }
        return true;
    }
};