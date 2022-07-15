// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int countRev (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        cout << countRev (s) << '\n';
    }
}

// Contributed By: Pranay Bansal// } Driver Code Ends



int countRev (string x)
{
    if(x.length()%2!=0)
        return -1;
    stack<char> s;
    int ans=0;
    for(int i=0; i<x.length(); i++)
    {
        if(x[i]=='{')
        {
            s.push(x[i]);
        }
        else
        {
            if(s.size()==0)
            {
                ans++;
                s.push('{');
            }
            else if((s.top()=='{' && x[i]=='}'))
            {
                s.pop();
            }
            else
            {
                s.push(x[i]);
            }
        }
    }
    ans+=s.size()/2;
    return ans;
}