class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> arr;
        for(int i=0; i<n; i++)
        {
            vector<int> ve(n, 0);
            arr.push_back(ve);
        }
        int r1=0, r2=n-1, c1=0, c2=n-1, v=1;
        while(r1<=r2 && c1<=c2)
        {
            for(int i=c1; i<=c2; i++)
            {
                arr[r1][i]=v;
                v++;
            }
            r1++;
            for(int i=r1; i<=r2; i++)
            {
                arr[i][c2]=v;
                v++;
            }
            c2--;
            for(int i=c2; i>=c1; i--)
            {
                arr[r2][i]=v;
                v++;
            }
            r2--;
            for(int i=r2; i>=r1; i--)
            {
                arr[i][c1]=v;
                v++;
            }
            c1++;
        }
        return arr;
    }
};