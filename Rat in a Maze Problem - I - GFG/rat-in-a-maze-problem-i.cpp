// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    void f(int i,int j, vector<vector<int>> &m, int n, vector<string> &v, string temp)
    {
        if(i>=n || i<0 || j>=n || j<0 || m[i][j]!=1)
            return;
            
        
        
        if(i==n-1 && j==n-1)
        {
            v.push_back(temp);
            return;
        }
        
        m[i][j]=0;
        f(i+1,j,m,n,v,temp+"D");
        f(i,j-1,m,n,v,temp+"L");
        f(i,j+1,m,n,v,temp+"R");
        f(i-1,j,m,n,v,temp+"U");
        
        m[i][j]=1;
        
        return;
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string> v;
        f(0,0,m,n,v,"");
        return v;
    }
};

    


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends