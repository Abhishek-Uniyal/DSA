// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    void f(vector<int>& A,vector<vector<int>> &v,int i,vector<int> &temp)
    {
        if(i == A.size())
        {    v.push_back(temp);
             return;
        }
        temp.push_back(A[i]);
        f(A,v,i+1,temp);
        temp.pop_back();
        f(A,v,i+1,temp);
    }
    vector<vector<int> > subsets(vector<int>& A)
    {
        vector<vector<int>> v;
        vector<int> temp;
        f(A,v,0,temp);
        sort(v.begin(),v.end());
        
        return v;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n, x;
		cin >> n;

		vector<int> array;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			array.push_back(x);
		}
        
        
        Solution ob;
		vector<vector<int> > res = ob.subsets(array);

		// Print result
		for (int i = 0; i < res.size(); i++) {
			for (int j = 0; j < res[i].size(); j++)
				cout << res[i][j] << " ";
			cout << endl;
		}

		
	}

	return 0;
}  // } Driver Code Ends