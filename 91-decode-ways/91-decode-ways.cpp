class Solution {
public:
    int numDecodings(string s) {
         //Taking care of the edge cases
        if (s[0] == '0') return 0;
        if (s.size() == 1) return 1;
        
        //Creating a dp vector
        vector<int> dp(s.size()+1, 0);
        dp[s.size()] = 1;
        for (int i = s.size() - 1; i >= 0; --i) {
            //Check for single digit
            if (s[i] != '0') 
                dp[i] += dp[i+1];
            //Check for multiple digits since the to digit numbers lie between 10 and 26(both inclusive)
            if (i+1 < s.size() && (s[i] == '1' || s[i] == '2' && s[i+1] <= '6')) 
                dp[i] += dp[i+2];
        }
        return dp[0]; 
    }
};