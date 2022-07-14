class Solution {
public:
    void f(vector<int>& nums,vector<vector<int>> &v,int index,vector<int> &temp)
    {
        v.push_back(temp);
        for(int i=index;i<nums.size();i++)
        {
            temp.push_back(nums[i]);
            f(nums,v,i+1,temp);
            temp.pop_back();
        }
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>> v;
        vector<int> temp;
        sort(nums.begin(),nums.end());
        f(nums,v,0,temp);
        return v;
    }
};