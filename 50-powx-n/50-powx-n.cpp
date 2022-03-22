class Solution {
public:
    double mp(double x, long long n)
    {
        if(n==0)
            return (double)1.0;
        if(n%2==0)
            return myPow(double(x*x), n/2);
        else
            return (double)x*(myPow(x, n-1));
    }
    double myPow(double x, int n) {
        long long p=n;
        if(n<0)
            p=-1*p;
        double ans=mp(x, p);
        if(n<0)
            ans=double(1.0)/ans;
        return ans;
    }
};