class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0, j=0, c=0;
        cout<<m<<" "<<n<<" "<<c<<endl;
        while(i<m && j<n && c<m)
        {
            if(nums1[i]<=nums2[j])
            {
                i++;
            }
            else
            {
                j++;
            }
            c++;
        }
        while(i<m && c<m)
        {
            i++;
            c++;
        }
        cout<<i<<" "<<j<<" "<<c<<endl;
        int k=0;
        while(k<j)
        {
            swap(nums1[i++], nums2[k++]);
        }
        sort(nums1.begin(), nums1.begin()+m);
        sort(nums2.begin(), nums2.end());
        k=0;
        for(int i=m; k<n; i++){
            swap(nums1[i], nums2[k++]);
        }
    }
};