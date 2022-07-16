class Solution {
public:
    
    bool isPallindrome(int start,int end,string &s)
    {
        for(int i=start,j=end;i<j;i++,j--)
        {
            if(s[i]!=s[j])
                return false;
        }
        
        return true;
    }
    void f(int start,string &s,vector<vector<string>> &ans,vector<string> temp)
    {
        if(start==s.size())
        {
            ans.push_back(temp);
            return;
        }
        
        for(int i=start;i<s.size();i++) 
        {
            if(isPallindrome(start,i,s))
            {
                temp.push_back(s.substr(start,i-start+1));   
                f(i+1,s,ans,temp);
                temp.pop_back();
            }
        }

    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> temp;
        f(0,s,ans,temp);
        return ans;
    }
};