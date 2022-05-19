class Solution {
public:
    void helper(vector<string> &v,string s,int o,int c, int n)
    {
         if(o==n && c==n)
         {
            v.push_back(s);
            return;
         }
          if(o<n)
            helper(v,s+"(", o+1, c, n);
          if(c<o)
            helper(v,s+")", o, c+1, n);   
    }
    vector<string> generateParenthesis(int n) 
    {
        vector<string> ans;
        string s;
        helper(ans, s, 0, 0, n);
        return ans;
    }
};