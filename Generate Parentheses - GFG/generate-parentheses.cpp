// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
vector<string> AllParenthesis(int n) ;


 // } Driver Code Ends
//User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
class Solution
{
    public:
    
    void f(int co,int cc,int n,vector<string> &ans,string temp)
    {
        if(co>=cc)
        {
            if(co==n && cc==n)
            {
                ans.push_back(temp);
                return;
            }
            if((co==n && cc!=n))
            {
                f(co,cc+1,n,ans,temp+')');
                return;
            }
            
            if((co!=n && cc==n))
            {
                f(co+1,cc,n,ans,temp+'(');
                return;
            }
            
            f(co+1,cc,n,ans,temp+'(');
            f(co,cc+1,n,ans,temp+')');
        }
    return;    
    }
    
    vector<string> AllParenthesis(int n) 
    {
        vector<string> ans;
        f(1,0,n,ans,"(");
        return ans;
    }
};

// { Driver Code Starts.


int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		Solution ob;
		vector<string> result = ob.AllParenthesis(n); 
		sort(result.begin(),result.end());
		for (int i = 0; i < result.size(); ++i)
			cout<<result[i]<<"\n";
	}
	return 0; 
} 
  // } Driver Code Ends