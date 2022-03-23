class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int> l(n, 0);
        vector<int> r(n, 0);
        l[0]=0;
        int ma=0;
        for(int i=1; i<n; i++)
        {
            l[i]=max(l[i-1], height[i-1]);
        }
        r[n-1]=0;
        ma=0;
        for(int i=n-2; i>=0; i--)
        {
            r[i]=max(r[i+1], height[i+1]);
        }
        // for(int i=0; i<n; i++)
        // {
        //     cout<<r[i]<<" ";
        // }
        //cout<<endl;
        int ans=0;
        for(int i=1; i<n-1; i++)
        {
            if((min(l[i], r[i])-height[i])>0)
                ans+=(min(l[i], r[i])-height[i]);
        }
        return ans;
    }
};