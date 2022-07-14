// { Driver Code Starts
// kth largest element in a 2d array sorted row-wise and column-wise
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
int mat[MAX][MAX];
int kthSmallest(int mat[MAX][MAX], int n, int k);
// driver program to test above function
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
    
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>mat[i][j];
        int r;
        cin>>r;
        cout<<kthSmallest(mat,n,r)<<endl;
    }
     // cout << "7th smallest element is " << kthSmallest(mat, 4, 7);
      return 0;
}
// } Driver Code Ends


int count(int mat[MAX][MAX], int n,int target)
{
    int curr_row=n-1,curr_col=0,count=0;
    while(curr_row>=0 && curr_col<n)
    {
        if(mat[curr_row][curr_col]<=target)
        {
            count+=(curr_row+1);
            curr_col++;
        }
        else
            curr_row--;
    }
    return count;
}
int kthSmallest(int mat[MAX][MAX], int n, int k)
{
    int lb=mat[0][0],ub=mat[n-1][n-1];
    while(lb<ub)
    {
        int mid=lb-(lb-ub)/2;
        int res=count(mat,n,mid);
        if(res>=k)
            ub=mid;
        else
            lb=mid+1;
    }
    return ub;
}
