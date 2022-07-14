// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

vector<string>  spaceString(char str[]);

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        char str[10000];
        cin>>str;
        vector<string> vec = spaceString(str);
        for(string s: vec){
            cout<<s<<"$";
        }
        cout<<endl;
    }

}
// } Driver Code Ends


/*You have to complete this function*/
void helper(char str[], vector<string> &ans, string out, int in, int n)
{
    if(in==n)
    {
        ans.push_back(out);
        return;
    }
    helper(str, ans, out+str[in], in+1, n);
    if(in!=n-1)
    helper(str,ans, out+str[in]+" ", in+1, n);
}
vector<string>  spaceString(char str[])
{
    vector<string> ans;
    string out="";
    int n=strlen(str);
    helper(str, ans, out, 0, n);
    return ans;
}