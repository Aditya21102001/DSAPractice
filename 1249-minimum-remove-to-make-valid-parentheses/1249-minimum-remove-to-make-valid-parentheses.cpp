class Solution {
public:
    string minRemoveToMakeValid(string s) {
        
        stack<pair<int,char>> st;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                st.push({i,'('});
            }
            else if(s[i]==')')
            {
                if(!st.empty()&&st.top().second=='(')
                {
                st.pop();
                }
                else
                { 
                    st.push({i,s[i]});
                }
            }
        }
        // cout<<st.size()<<endl;
        while(!st.empty())
        {
            s[st.top().first]='0';
            st.pop();
            
        }
        
        string ans;
        for(int i=0;i<n;i++)
        {
            if(s[i]!='0')
                ans+=s[i];
        }
        return ans;
    }
};