class Solution {
public:
    int rob(vector<int>& nums) {
    int prev,prev_p,curr;
    prev_p = 0;
    prev = nums[0];
    curr=prev;
    for(int i=1;i<nums.size();i++)
    {
        curr=max(prev,nums[i]+prev_p);
        prev_p=prev;
        prev=curr;
    }
    return curr;  
    }
};