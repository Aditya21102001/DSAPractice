class Solution {
public:
    int getMaxLen(vector<int>& nums) {
        vector<vector<int>> v;
        for(int i=0; i<nums.size(); i++)
        {
            vector<int> vi;
            while(i<nums.size() && nums[i]!=0)
            {
                vi.push_back(nums[i]);
                i++;
            }
            v.push_back(vi);
        }
        int ans=0;
        for(int i=0; i<v.size(); i++)
        {
            int c=0;
            for(int j=0; j<v[i].size(); j++)
            {
                if(v[i][j]<0)
                    c++;
            }
            cout<<c<<endl;
            if(c%2==0)
                ans=max(ans, (int)v[i].size());
            else
            {
                int k=0;
                while(k<v[i].size() && v[i][k]>0)
                {
                    k++;
                }
                ans=max(ans, (int)(v[i].size()-k-1));
                cout<<ans<<endl;
                k=v[i].size()-1;
                while(k>=0 && v[i][k]>0)
                {
                    k--;
                }
                cout<<k<<endl;
                ans=max(ans, (int)(k));
            }
        }
        return ans;
    }
};