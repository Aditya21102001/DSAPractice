// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int nn) {
	    vector<int> p;
        vector<int> n;

        for (int i = 0; i < nn; i++)
        {
            if (arr[i] >= 0)
            {
                p.push_back(arr[i]);
            }
            else
            {
                n.push_back(arr[i]);
            }
        }

        int i = 0, j = 0, k = 0;

        while (k < nn)
        {
            if (i < p.size())
            {
                arr[k++] = p[i++];
            }
            if (j < n.size())
            {
                arr[k++] = n[j++];
            }
        }
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends