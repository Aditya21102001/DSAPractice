class Solution {
public:
    string countAndSay(int n) {
        string temp="", ans="1";
        n--;
        while(n)
        {
            temp="";
            for(int i=0; i<ans.length(); i++)
            {
                int c=1;
                while(i+1<ans.length() && ans[i+1]==ans[i])
                {
                    c++;
                    i++;
                }
                temp+=to_string(c)+ans[i];
            }
            ans=temp;
            n--;
        }
        return ans;
    }
};