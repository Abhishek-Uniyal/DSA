// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    int unique=0,count=0,a=0,r=0;
    unordered_map<int,int> map;
    for(a=0;a<s.length();a++)
    {
        if(map.find(s[a])==map.end())
        {
            while(unique==k)
            {
                map[s[r]]--;
                if(map[s[r]]==0)
                {
                    map.erase(s[r]);
                    unique--;
                }
                r++;
            }
            map[s[a]]++;
            unique++;
            if(unique==k)
                count=max(count,(a-r+1));
        }
        else
        {
            map[s[a]]++;
            if(unique==k)
                count=max(count,(a-r+1));
        }
    }
    
    return (count==0)?-1:count;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}
  // } Driver Code Ends