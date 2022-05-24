// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
public:
    bool ck(string s)
    {
        for(int i = 0; i<s.size(); i++)
        {
            if(s[i]==s[i+1])
            return true;
        }
        return false;
    }
    
    string rremove(string s){
        for(int i = 0; i<s.size(); i++)
        {
            int j = i+1;
            int flag = 0;
            while(j<s.size() && s[i]==s[j])
            {
                j++;
                flag = 1;
            }
            if(flag == 1)
            {
            s.erase(i, j-i);
            --i;
            }
        }
        
        if(ck(s))
        return rremove(s);
        return s;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);
        Solution ob;
        cout << ob.rremove(s) << "\n";
    }
    return 0;
}  // } Driver Code Ends