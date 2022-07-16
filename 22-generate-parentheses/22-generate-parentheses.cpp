class Solution {
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
    
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        f(1,0,n,ans,"(");
        return ans;
    }
};