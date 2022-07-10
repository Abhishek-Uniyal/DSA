// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution {
  public:
    long long getSubstringWithEqual012(string str) {
        // code here
        unordered_map<string,int> mp;
        int z0=0,z1=0,z2=0;
        
        long long ans=0;
        string temp = to_string(z1-z0)+"#"+to_string(z2-z1);
        mp[temp]++;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]=='0')
            {
               z0+=1; 
            }
            else if(str[i]=='1')
            {
               z1+=1; 
            }
            else
            {
               z2+=1; 
            }
        temp = to_string(z1-z0)+"#"+to_string(z2-z1);
        if(mp.find(temp)!=mp.end())
        {
            ans+=mp[temp];
            mp[temp]++;
        }
        else
            mp[temp]=1;
        }
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
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.getSubstringWithEqual012(s)<<endl;
	}
    return 0;
}
  // } Driver Code Ends