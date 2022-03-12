class Solution {
public:
    int ci(vector<int> ar, int n, int x)
    {
        int l=0, r=n-1;
        while(l<r)
        {
            int m=(l+(r-l)/2);
            if(ar[m]>=x)
            {
                r=m;
            }
            else
            {
                l=m+1;
            }
        }
        return r;
    }
    int lengthOfLIS(vector<int>& a) {
        int n=a.size();
        vector<int> lcs;
       lcs.push_back(a[0]);
       for(int i=1; i<n; i++)
       {
           int l=lcs.size();
           if(a[i]>lcs[l-1])
           {
               lcs.push_back(a[i]);
           }
           else
           {
               int in=ci(lcs, lcs.size(), a[i]);
               lcs[in]=a[i];
           }
       }
       return lcs.size();
    }
};