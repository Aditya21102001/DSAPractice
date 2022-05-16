class Solution {
public:
    bool can(vector<int> & qu, int n, int m, int mi)
    {
        if(mi==0)
        {
            return false;
        }
        for(int i=0; i<n; i++)
        {
            if(m<=0)
            {
                return false;
            }
            int t=qu[i]/mi;
            if(qu[i]%mi!=0)
            {
                t++;
            }
            m-=t;
        }
        if(m<0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
    int minimizedMaximum(int n, vector<int>& quantities) {
        long long e=*max_element(quantities.begin(),quantities.end()), s=0;
        if(quantities.size()==1)
        {
            return quantities[0];
        }
        long long ans=-1;
        while(s<=e)
        {
            int mi=(e+s)/2;
            bool r=can(quantities, quantities.size(), n, mi);
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