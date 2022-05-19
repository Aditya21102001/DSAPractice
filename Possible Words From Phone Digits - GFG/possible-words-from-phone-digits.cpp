// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
#include <string>

using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to find list of all words possible by pressing given numbers.
    vector<string> kp={"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    void helper(vector<string> &ans, int a[], int n, int i, string out)
    {
        if(i==n)
        {
            ans.push_back(out);
            return;
        }
        int nu=a[i];
        if(nu==0 || nu==1)
        {
            helper(ans, a, n, i+1, out);
        }
        for(int j=0; j<kp[nu].length(); j++)
        {
            out+=kp[nu][j];
            helper(ans, a, n, i+1, out);
            out.pop_back();
        }
        return;
    }
    vector<string> possibleWords(int a[], int N)
    {
        vector<string> ans;
        string out="";
        helper(ans, a, N, 0, out);
        return ans;
    }
};


// { Driver Code Starts.

int main() {
  
	int T;
	
	cin >> T; //testcases
	
	while(T--){ //while testcases exist
	   int N;
	    
	   cin >> N; //input size of array
	   
	   int a[N]; //declare the array
	   
	   for(int i =0;i<N;i++){
	       cin >> a[i]; //input the elements of array that are keys to be pressed
	   }
	   
	   Solution obj;
	   
	  vector <string> res = obj.possibleWords(a,N);
	  for (string i : res) cout << i << " ";
	   cout << endl;
	}
	
	return 0;
}  // } Driver Code Ends