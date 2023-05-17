//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int solve(int arr[], int n, int sum,int i,int s){
	    if(s>sum){
	        return 0;
	    }
	    if(i==n){
	        if(s==sum){
	            return 1;
	        }else{
	            return 0;
	        }
	    }
	    
	    int L = solve(arr,n,sum,i+1,s+arr[i]);
	    int K = solve(arr,n,sum,i+1,s);
	    
	    return L+K;
	    
	}
	int perfectSum(int arr[], int n, int sum)
	{
        return solve(arr,n,sum,0,0);
	}
	  
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends
