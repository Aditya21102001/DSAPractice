// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution{
    public:
    /*You are required to complete this method*/
     int max_path_sum(int a[], int b[], int l1, int l2)
    {
        long long i=0, j=0, s1=0, s2=0, ans=0;
        while(i<l1 && j<l2)
        {
            if(a[i]<b[j])
            {
                s1+=a[i];
                i++;
            }
            else if(a[i]>b[j])
            {
                s2+=b[j];
                j++;
            }
            else
            {
                // s1+=a[i];
                // s2+=b[j];
                ans+=max(s1, s2)+a[i];
                s1=0;
                s2=0;
                i++;
                j++;
            }
        }
        while(i<l1)
        {
            s1+=a[i++];
        }
        while(j<l2)
        {
            s2+=b[j++];
        }
        ans+=max(s1, s2);
        return ans;
        //Your code here
    }
};

// { Driver Code Starts.

int main()
{
    int T;
    cin>>T;

    while(T--)
    {
        int N,M;
        cin>>N>>M;
        fflush(stdin);
        int a[N],b[M];
        for(int i=0;i<N;i++)
            cin>>a[i];
        for(int i=0;i<M;i++)
            cin>>b[i];
        Solution obj;
        int result = obj.max_path_sum(a,b,N,M);
        cout<<result<<endl;
    }
}

  // } Driver Code Ends