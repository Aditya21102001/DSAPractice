class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int c=0, l=0, r=1;
        int n=intervals.size();
        sort(intervals.begin(), intervals.end());
        while(r<n)
        {
            if(intervals[l][1]<=intervals[r][0])
            {
                l=r;
                r++;
            }
            else if(intervals[l][1]<intervals[r][1])
            {
                r++;
                c++;
            }
            else if(intervals[l][1]>intervals[r][1])
            {
                l=r;
                r++;
                c++;
            }
            else if(intervals[l][1]==intervals[r][1])
            {
                c++;
                l=r;
                r++;
            }
        }
        return c;
    }
};