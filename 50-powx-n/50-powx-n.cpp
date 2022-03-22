class Solution {
public:
    double myPow(double x, int n) {
        long long p=n;
        if(n<0)
            p=p*(-1);
        double ans=1;
        while(p>0)
        {
            if(p%2==0)
            {
                x=(x*x);
                p=p/2;
            }
            else
            {
                ans=ans*x;
                p=p-1;
            }
        }
        if(n<0)
            ans=double(1.0)/ans;
        return ans;
    }
};