class Solution {
public:
    void nextPermutation(vector<int>& arr) {
        long long n=arr.size();
        int in1=-1, in2;
        for(long long i=n-2; i>=0; i--)
        {
            if(arr[i]<arr[i+1])
            {
                in1=i;
                break;
            }
        }
        if(in1>=0)
        {
            for(long long i=n-1; i>=in1; i--)
            {
                if(arr[i]>arr[in1])
                {
                    in2=i;
                    break;
                }
            }
            swap(arr[in1], arr[in2]);
        }
        auto it=arr.begin();
        //advance(it, in1+1);
        reverse(it+in1+1, arr.end());
    }
};