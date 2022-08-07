class Solution {
public:
    string decodeString(string s) {
        string ans="";
        stack<string> st1;
        stack<int> st2;
        for(int i=0; i<s.length();)
        {
            if(s[i]>='0' && s[i]<='9')
            {
                int nu=0;
                while(i<s.length() && s[i]>='0' && s[i]<='9')
                {
                    nu=nu*10+(s[i]-'0');
                    i++;
                }
                st2.push(nu);
            }
            else if(s[i]=='[')
            {
                st1.push(ans);
                ans="";
                i++;
            }
            else if(s[i]==']')
            {
                int n=st2.top();
                st2.pop();
                string s1=st1.top();
                st1.pop();
                string res="";
                for(int j=0; j<n; j++)
                {
                    s1=s1+ans;
                }
                ans=s1;
                i++;
            }
            else
            {
                ans+=s[i];
                i++;
            }
        }
        return ans;
    }
};