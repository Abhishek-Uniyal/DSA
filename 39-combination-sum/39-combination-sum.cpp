class Solution {
public:
    void f(vector<int>& candidates, int target,vector<vector<int>>& v, vector<int> &temp,int i)
    {
        if(target==0)
        {
            v.push_back(temp);
            return;
        }
        if(target<0 || i >= candidates.size())
            return;
        temp.push_back(candidates[i]);
        f(candidates,target-candidates[i],v,temp,i);
        temp.pop_back();
        f(candidates,target,v,temp,i+1);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
       vector<vector<int>> v;
        vector<int> temp;
        int sum=0;
        f(candidates,target,v,temp,0);
        return v;
    }
};