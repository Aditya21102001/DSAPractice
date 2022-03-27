class Solution {
public:
    string convertToTitle(int cl) {
        string ans="";
        while(cl>0)
        {
            cl--;
            int t=(cl)%26;
            ans+=('A'+t);
            cl=cl/26;
        }
        reverse(ans.begin(), ans.end());
        return ans;
            
    }
};