// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
    public:
    int lenOfLongSubarr(int arr[],  int N, int k) 
    { 
        // Complete the function
        int sum=0,count=0;
        unordered_map<int,int> mp;
        mp[sum]=-1;
        for(int i=0;i<N;i++)
        {
            sum+=arr[i];
            if(mp.find(sum-k)!=mp.end())
                count=max(count,i-mp[sum-k]);
            if(mp.find(sum)==mp.end())
                mp[sum]=i;
        }
    return count;
    } 

};

// { Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends