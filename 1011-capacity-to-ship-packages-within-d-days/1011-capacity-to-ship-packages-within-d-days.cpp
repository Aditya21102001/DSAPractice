class Solution {
public:
    bool can(vector<int> & wt, int n, int d, int mi)
    {
        for(int i=0; i<n; i++)
        {
            int su=0, an=0;
            while(i<n)
            {
                if(su+wt[i]>mi)
                {
                    i--;
                    break;
                }
                su+=wt[i];
                i++;
            }
            d--;
            if(d<0)
            {
                return false;
            }
        }
        return d>=0;
    }
    int shipWithinDays(vector<int>& wt, int days) {
        //sort(wt.begin(), wt.end());
        int s=*max_element(wt.begin(),wt.end()), e=0, ans=-1;
        for(int i=0; i<wt.size(); i++)
        {
            e+=wt[i];
        }
        while(s<=e)
        {
            int mi=(s+e)/2;
            bool r=can(wt, wt.size(), days, mi);
            if(r)
            {
                ans=mi;
                e=mi-1;
            }
            else
            {
                s=mi+1;
            }
        }
        return ans;
    }
};