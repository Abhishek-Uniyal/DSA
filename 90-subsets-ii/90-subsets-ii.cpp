class Solution {
public:
    void f(vector<int>& nums,vector<vector<int>> &v,int index,vector<int> &temp)
    {
        v.push_back(temp);
        for(int i=index;i<nums.size();i++)
        {
            if(i>index && nums[i]==nums[i-1])
                continue;
            temp.push_back(nums[i]);
            f(nums,v,i+1,temp);
            temp.pop_back();
        }
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        vector<vector<int>> v;
        vector<int> temp;
        sort(nums.begin(),nums.end());
        f(nums,v,0,temp);
        return v;
    }
};