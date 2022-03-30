// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    void swap(int *a, int *b)
    {
        int temp;
        temp = *a;
        *a = *b;
        *b = temp;
    }

    //Function to segregate negative and positive numbers.
    int segregate(int arr[], int n)
    {
        int j = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] <= 0)
            {
                swap(&arr[i], &arr[j]);
                j++;
            }
        }

        return j;
    }

    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n)
    {
        int s = n + 1;
        int j = segregate(arr, n);
        arr = arr + j;
        n -= j;
        for (int i = 0; i < n; i++)
        {
            if (abs(arr[i]) - 1 < n && arr[abs(arr[i]) - 1] > 0)
            {
                arr[abs(arr[i]) - 1] *= -1;
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (arr[i] > 0)
            {
                return i + 1;
            }
        }
        return n + 1;
    }
};

// { Driver Code Starts.

int missingNumber(int arr[], int n);

int main() { 
    
    //taking testcases
    int t;
    cin>>t;
    while(t--){
        
        //input number n
        int n;
        cin>>n;
        int arr[n];
        
        //adding elements to the array
        for(int i=0; i<n; i++)cin>>arr[i];
        
        Solution ob;
        //calling missingNumber()
        cout<<ob.missingNumber(arr, n)<<endl;
    }
    return 0; 
}   // } Driver Code Ends