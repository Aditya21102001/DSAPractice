class Solution {
public:
    bool isP(string &st, int s, int e)
    {
        while(s<e)
        {
            if(st[s]!=st[e])
                return false;
            s++;
            e--;
        }
        return true;
    }
    void help(string &s, int in, vector<string> &p, vector<vector<string>> &res)
    {
        if(s.length()==in)
        {
            res.push_back(p);
            return;
        }
        for(int i=in; i<s.length(); i++)
        {
            if(isP(s, in, i))
            {
                p.push_back(s.substr(in, i-in+1));
                help(s, i+1, p, res);
                p.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> p;
        help(s, 0, p, res);
        return res;
    }
};