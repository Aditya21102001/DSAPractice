class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int n=arr.size();
        int i=0, j=n-1,m;
        while(i<=j)
        {
            m=(i+j)/2;
            //cout<<m<<endl;
            if((m==0 || arr[m]!=arr[m-1]) && (m==n-1 || arr[m]!=arr[m+1]))
            return arr[m];
            if(m==0 || arr[m]!=arr[m-1])
            {
                if((m)%2==0)
                {
                    i=m+1;
                }
                else
                {
                    j=m-1;
                }
            }
            else
            {
                if((n-m-1)%2==0)
                {
                    j=m-1;
                }
                else
                {
                    i=m+1;
                }
            }
        }
        return arr[m];
    }
};