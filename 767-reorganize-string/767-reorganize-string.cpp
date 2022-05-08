class Solution {
public:
    string reorganizeString(string s) {
        int cn=0;
        char c;
        unordered_map<char, int> mp;
        for(int i=0; i<s.length(); i++)
        {
            mp[s[i]]++;
        }
        for(auto it=mp.begin(); it!=mp.end(); it++)
        {
            if(cn<=it->second)
            {
                cn=it->second;
                c=it->first;
            }
        }
        if(cn>(s.length()+1)/2)
        {
            return "";
        }
        int i;
        string ans="";
        for(i=0; i<s.length(); i++)
        {
            if(cn<=0)
            {
                break;
            }
            if(i%2==0)
            {
                ans+=c;
                cn--;
            }
            else
            {
                ans+='1';
            }
        }
        int j=1;
        for(auto it=mp.begin(); it!=mp.end(); it++)
        {
            if(it->first==c)
                continue;
            for(int k=0; k<it->second; k++)
            {
                if(i<s.length())
                {
                    if(i<s.length() && i%2==0)
                    {
                        ans+=it->first;
                        i++;
                    }
                    else
                    {
                        ans+='1';
                        i++;
                        if(i<s.length())
                        {
                            ans+=it->first;
                            i++;
                        }
                        else
                        {
                            ans[j]=it->first;
                            j+=2;
                        }
                    }
                }
                else
                {
                    ans[j]=it->first;
                    j+=2;
                }
            }
        }
        return ans;
    }
};